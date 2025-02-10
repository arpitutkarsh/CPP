#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

const int SIZE = 8;  // Grid size (8x8)
const int MINES = 10; // Number of mines

vector<vector<char>> board(SIZE, vector<char>(SIZE, '-')); // Hidden board
vector<vector<char>> displayBoard(SIZE, vector<char>(SIZE, '-')); // Display board
vector<vector<bool>> revealed(SIZE, vector<bool>(SIZE, false)); // Track revealed cells

// Directions for adjacent cells
int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

// Function to check if a cell is within bounds
bool isValid(int x, int y) {
    return (x >= 0 && x < SIZE && y >= 0 && y < SIZE);
}

// Function to randomly place mines
void placeMines() {
    srand(time(0));
    int count = 0;
    while (count < MINES) {
        int x = rand() % SIZE;
        int y = rand() % SIZE;
        if (board[x][y] != '*') {
            board[x][y] = '*';
            count++;
        }
    }
}

// Function to count adjacent mines
int countMines(int x, int y) {
    int count = 0;
    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i], ny = y + dy[i];
        if (isValid(nx, ny) && board[nx][ny] == '*') {
            count++;
        }
    }
    return count;
}

// Function to initialize the board
void initializeBoard() {
    placeMines();
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] != '*') {
                board[i][j] = '0' + countMines(i, j);
            }
        }
    }
}

// Function to display the board
void printBoard(const vector<vector<char>>& b) {
    cout << "   ";
    for (int i = 0; i < SIZE; i++) cout << i << " ";
    cout << "\n";
    for (int i = 0; i < SIZE; i++) {
        cout << i << "  ";
        for (int j = 0; j < SIZE; j++) {
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }
}

// Function to reveal a cell
void reveal(int x, int y) {
    if (!isValid(x, y) || revealed[x][y]) return;
    revealed[x][y] = true;
    displayBoard[x][y] = board[x][y];

    if (board[x][y] == '0') { // If no adjacent mines, reveal neighbors
        for (int i = 0; i < 8; i++) {
            reveal(x + dx[i], y + dy[i]);
        }
    }
}

// Function to check if the player has won
bool checkWin() {
    int coveredCells = 0;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (displayBoard[i][j] == '-') {
                coveredCells++;
            }
        }
    }
    return (coveredCells == MINES);
}

// Main game loop
void playGame() {
    initializeBoard();
    int x, y;
    bool gameOver = false;

    while (!gameOver) {
        printBoard(displayBoard);
        cout << "Enter row and column to reveal (e.g., 3 4): ";
        cin >> x >> y;

        if (!isValid(x, y) || revealed[x][y]) {
            cout << "Invalid move! Try again.\n";
            continue;
        }

        if (board[x][y] == '*') {
            cout << "💥 You hit a mine! Game Over! 💥\n";
            printBoard(board);
            gameOver = true;
            break;
        }

        reveal(x, y);

        if (checkWin()) {
            cout << "🎉 Congratulations! You won! 🎉\n";
            printBoard(board);
            break;
        }
    }
}

int main() {
    cout << "💣 Welcome to Minesweeper! 💣\n";
    playGame();
    return 0;
}

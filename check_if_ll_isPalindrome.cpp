#include<bits/stdc++.h>
#include<vector>
using namespace std;
//This takes TIME COMPLEXTIY of O(n) and Space complexity of O(n)
//to decrease time and scpace complexity refer to check_ll_pallindrome.cpp
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void insertatTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
bool checkPallindrome(vector<int> &arr){
    int n = arr.size();
    int start = 0;
    int end = n-1;
    while(start <= end){
        if(arr[start] != arr[end]){
            return 0;
        }
        else{
            start++;
            end--;
        }
    }
    return 1;
}

bool isPallindrome(Node* &head){
    vector<int> arr;
    Node* temp = head;
    while(temp != NULL){
        arr.push_back(temp->data);
        temp = temp->next;
    }
    return checkPallindrome(arr);
}
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Node* node1 = new Node(1);
    Node* tail = node1;
    Node* head = node1;
    insertatTail(tail, 2);
    insertatTail(tail,3);
    print(head);
    if(isPallindrome(head)){
        cout<<"The given linked list is PALLINDROME"<<endl;
    }
    else{
        cout<<"The given linked list is NOT PALLINDROME"<<endl;
    }
    return 0;
}
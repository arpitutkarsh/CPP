#include <iostream>
using namespace std;
void printpointer(int *p, int *q)
{
    cout << "Value at p " << *p << endl;
    cout << "Address at p " << p << endl;
    cout << "Address of p " << &p << endl;
    cout << "Value at q " << *q << endl;
    cout << "Address at q " << q << endl;
    cout << "Address of q " << &q << endl;
}
int main()
{
    int n = 5;
    int *q = &n;
    int o = 90;
    int *w = &o;
    printpointer(q, w);
    printpointer(w, q);
    int a = 5;
    int b = 6;
    return 0;
}
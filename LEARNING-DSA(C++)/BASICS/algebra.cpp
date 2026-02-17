#include <iostream>
using namespace std;

int main() {
    int a , b ;
    cout <<"Enter first number:" ;
    cin >> a;
    cout <<"Enter second number:";
    cin >> b;

    cout << "sum:" << (a+b) << endl;
    cout << "difference:" << (a-b) << endl;
    cout << "multiplication:" << (a*b) << endl;
    cout << "division:" << (float)a/b << endl;
    return 0;
}
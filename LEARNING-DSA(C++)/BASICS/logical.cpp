#include <iostream>
using namespace std;

int main(){
    int a , b ;
    cout << "enter a :" ;
    cin >> a;
    cout << "enter b :" ;
    cin >> b;
    cout << (a > 5 && b < a ) << endl;
    cout << (a = b || a > b) << endl;
    cout << (a !=b ) << endl;
    return 0;
}
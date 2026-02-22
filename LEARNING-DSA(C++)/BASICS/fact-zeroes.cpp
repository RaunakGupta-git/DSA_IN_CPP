#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "enter the number: ";
    cin >> n;
    int c = 0;
    while(n > 0){
        n /= 5;
        c += n;
    }
    cout << c << " zeroes in given number";
    return 0;
}
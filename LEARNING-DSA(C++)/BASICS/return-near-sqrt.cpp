#include <iostream>
using namespace std;

int main(){
    int n, i = 1;
    cout << "enter the number: ";
    cin >> n;

    if(n < 0 || n==0){
        return 0;
    }

    while(i<= n / i){
        i++;
    }

    cout << i - 1;   
}
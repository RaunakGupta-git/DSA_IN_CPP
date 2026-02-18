#include <iostream>
using namespace std;
int main(){
    int n , pow ,num;
    cout << "enter the number:" ;
    cin >> n;
    cout << "enter the power:";
    cin >> pow;

    num = n;
    for (int i=1; i<pow ;i++){
        num = num*n;
    }

    cout << "the required answer is : " << num;
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num,rem,ans=0,mul=1;
    cout << "enter the number:";
    cin >> num;

    while(num>0){
        rem = num%2;
        num = num/2;
        ans = rem * mul + ans;
        mul*=10;    
    }

    cout << "the required binary form is:" << ans;
    return 0;
}
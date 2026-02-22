#include <iostream>
using namespace std;

int digit(int n){
    if(n == 0) return 1;
    int c = 0;
    while(n != 0){
        n /= 10;
        c++;
    }
    return c;
}

int power(int base, int exp){
    int res = 1;
    while(exp>0){
        exp--;
        res *= base;
    }
    return res;
}

int main(){
    int n, rem, ans = 0, temp;
    cout << "enter the number: ";
    cin >> n;

    temp = n;
    int d = digit(n);

    while(n != 0){
        rem = n % 10;
        n /= 10;
        ans += power(rem, d);
    }

    if(ans == temp)
        cout << temp << " is an armstrong number.";
    else
        cout << temp << " is not an armstrong number.";
}
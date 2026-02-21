#include <iostream>
using namespace std;

int main(){
    int n,rem,rev=0,temp;
    cout << "enter the number: ";
    cin >> n;
    temp=n;
    while (n!=0){
        rem = n%10;
        n /= 10;
        rev=rev*10 + rem;
    }
    if(temp==rev){
        cout << rev << " is a palindrome.";
    }
    else{
        cout << rev << " is not a palindrome.";
    }
}
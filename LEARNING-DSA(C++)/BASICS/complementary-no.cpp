#include <iostream>
using namespace std;

int main(){
    int n,rem,ans=0,i=1;
    cout << "enter the number: ";
    cin >> n;
    int temp = n;
    while(n!=0){
        rem=n%2;
        rem^=1;
        n/=2;
        ans += rem*i;
        i*=2;
    }
    cout << ans << " is the complementary of " << temp;
}
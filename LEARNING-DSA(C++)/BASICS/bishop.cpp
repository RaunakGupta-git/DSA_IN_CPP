#include <iostream>
using namespace std;

int main(){
    int total,a,b;
    cout << " enter coordinate address:  ";
    cin >> a >> b ;
    
    total = min(8-a,8-b) + min(a-1,b-1) + min(8-a,b-1) + min(a-1,8-b);

    cout << " The total possible steps is " << total;
}
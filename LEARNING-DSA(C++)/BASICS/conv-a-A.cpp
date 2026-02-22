#include <iostream>
using namespace std;

char convert( char name ){
    char ans = (name-'a') + 'A';
    return ans;
    
}
int main(){
    char name;
    cout << "enter lower character: " ;
    cin >> name;
    cout << convert(name) << " is the upper character of " << name;
}
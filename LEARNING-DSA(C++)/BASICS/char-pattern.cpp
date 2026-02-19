#include <iostream>
using namespace std;
int main(){
    int i , j ;
    char name = 'a';
    for (i=1;i<=5;i++){
        for (j=1;j<=5;j++){
            cout << char (name + i-1) << " ";
            
        }
        cout << endl;
    }
    return 0;
}
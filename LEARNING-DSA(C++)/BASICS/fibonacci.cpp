#include <iostream>
using namespace std;
int main()
{
    int n, i, first = 0, second = 1, next;
    cout << "enter the number:";
    cin >> n;
    cout << first << " " << second << " ";
    for (i = 1; i <= n - 2; i++)
    {
        next = first + second;
        cout << next << " ";
        first = second;
        second = next;
    }
    return 0;
}
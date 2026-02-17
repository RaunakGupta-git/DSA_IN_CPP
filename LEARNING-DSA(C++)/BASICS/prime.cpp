#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number:";
    cin >> n;
    if (n < 2)
    {
        cout << "number is prime !!";
    }
    bool isPrime = true;
    for (int i = 2; i*i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
    {
        cout << "number is prime!!";
    }
    else
    {
        cout << "number is not prime!!";
    }
    return 0;
}
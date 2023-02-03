// Factorial of n = 1*2*3*...*n
#include <iostream>
using namespace std;
int factorial(int);
int main() 
{
    int n;
    cout<<"Enter a number to find factorial: ";
    cin >> n;
    cout << "Factorial of " << n <<" = " << factorial(n);
    return 0;
}
int factorial(int n) 
{
    if (n > 1) 
    {
        return n*factorial(n-1);
    }
    else 
    {
        return 1;
    }
}

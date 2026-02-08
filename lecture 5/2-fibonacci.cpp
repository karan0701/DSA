// Fibonacci Series- 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int a = 0, b = 1;
    cout<<"Fibonacci Series is: ";
    cout<<a<<" "<<b<<" ";
    for (int i = 1; i <= n; i++)
    {

        int nextnum = a + b;
        cout << nextnum << " ";
        a = b;
        b = nextnum;
    }
}
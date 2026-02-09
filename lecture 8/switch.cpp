#include <iostream>
using namespace std;
int main()
{
    // char ch = '1';
    int a = 1;

    cout << endl;
    // switch (ch)
    switch(a)
    {
    case 1:
        cout << "first" << endl;
        break;
    case '1':
        cout << "Character" << endl;
        break;
    default:
        cout << "This is a default case" << endl;
    }
    cout << endl;
}
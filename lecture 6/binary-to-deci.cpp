#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int answer = 0;
    int i = 0;
    while (n != 0)
    {
        int lastdigit = n % 10; // last digit nikalne ke liye
        if (lastdigit == 1)
        {
            answer = answer + pow(2, i); // answer me 2 ki power i add krne ke liye
        }
        n = n / 10; // n ko 10 se divide krke last digit hata denge
        i++;        // i ko increment krke next bit ke liye ready ho jayenge
    }
    cout << "Decimal number is: " << answer << endl;
}
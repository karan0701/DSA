#include <iostream>
using namespace std;

int main()
{

    {
        int array[15] = {2, 7, 6, 8, 9};

        int n = 15;
        cout << "printing the array: " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << array[i] << " ";
        }
    }
    cout<<endl;

    {
        int array2[10] = {0};

        int n = 10;
        cout << "printing the array2: " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << array2[i] << " ";
        }
    }
    cout<<endl;
     {
        int array3[19] = {1};

        int n = 19;
        cout << "printing the array3: " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << array3[i] << " ";
        }
    }

}
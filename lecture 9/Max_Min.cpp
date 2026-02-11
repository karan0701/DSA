#include <iostream>
#include <climits> // used for INT_MIN and INT_MAX
using namespace std;

int getMax(int arr[], int size)
{

    int ans2 = INT_MIN;
    for (int i = 0; i < size; i++)
    {
         ans2 = max(ans2, arr[i]);
        // if (arr[i] > max)
        // {
        //     max = arr[i];
        // }
    }
    // returning maximum value

    return ans2;
}

int getMin(int arr[], int size)
{

    int ans1 = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        ans1 = min(ans1, arr[i]);
        // if (arr[i] < min)
        // {
        //     min = arr[i];
        // }
    }
    // returning minimum value

    return ans1;
}


int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size; // taking input of size of the array

    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "maximum value is: " << getMax(arr, size) << endl;
    cout << "minimum value is: " << getMin(arr, size) << endl;

}
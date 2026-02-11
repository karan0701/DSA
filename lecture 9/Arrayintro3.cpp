#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<<endl;
    cout << "printing the array: " << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout<<endl;
        cout<<"Printing DONE!";
        cout<<endl; cout<<endl;
}

int main()
{
int third[5]= {2,3,4};
printArray(third,5);
// cout<<endl;


int forth[15]= {1};
printArray(forth,15);
//cout<<endl;



int fifth[10]= {0};
printArray(fifth,10);



int thirdsize = sizeof(third)/sizeof(int);
cout<<"Size of Third Array is: "<<thirdsize<<endl;

int forthsize = sizeof(forth)/sizeof(int);
cout<<"Size of Fourth Array is: "<<forthsize<<endl;

int fifthsize = sizeof(fifth)/sizeof(int);
cout<<"Size of Fifth Array is: "<<fifthsize<<endl;


}
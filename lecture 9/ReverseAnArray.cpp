//  array = {2, 7, 5, 9}......  Reverse an array = {9, 5, 7, 2}

#include<iostream>
using namespace std;

    // int arr[], size;
    // cout<<"Enter the size of Array: ";
    // cin>>size;
    // cout<<"enter the elements of the Array: ";
    void reverse(int arr[], int size){
        int start = 0;
        int end = size -1;
         while(start <= end){
            swap(arr[start], arr[end]);
            start++;
            end--;

        
         }
    }

    void printArray(int arr[], int size){
    for (int i = 0; i< size ; i++){
        cout<< arr[i]<< " ";
    }
    cout<< endl;
}

int main(){

    int arr1[6] = {2, 7, 5, 9, 1, 3};
    int arr2[5] = {2, 7, 5, 9, 1};
     
    reverse(arr1, 6);
    reverse(arr2, 5);

    printArray(arr1, 6);
    printArray(arr2, 5);
    return 0;
}
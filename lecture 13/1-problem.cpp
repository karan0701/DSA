// first and last occurances of an element in a sorted array 
#include <iostream>
using namespace std;
int FirstOcc(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int ans = -1;
    int mid = start + (end-start)/2;

    while(start<=end){
        if(arr[mid] ==key){
            ans = mid;
            end = mid-1;

        }
        else if(key> arr[mid]){ //right mein jaoo
            start = mid +1;


        }
        else if(key<arr[mid]){ //left mein jaoo
          end = mid-1;

        }
        mid = start + (end-start)/2;
    }
}
int LastOcc(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int ans = -1;
    int mid = start + (end-start)/2;

    while(start<=end){
        if(arr[mid] ==key){
            ans = mid;
            start = mid+1;

        }
        else if(key> arr[mid]){ //right mein jaoo
            start = mid +1;
        }
        else if(key<arr[mid]){ //left mein jaoo
          end = mid-1;
        }
        mid = start + (end-start)/2;
    }
}
int main(){
    int even[5] = {1,2,3,3,5};
     cout << "first occurance of 3 is at Index  " << FirstOcc(even,5,3)<< endl;
     cout << "last occurance of 3 is at Index  " << LastOcc(even,5,3)<< endl;
    return 0;
}
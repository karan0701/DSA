#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size-1;

    int mid = start + ((end - start) / 2);
    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        // go to right wala part agar key badi hai to
        else if(arr[mid] < key){
            start = mid + 1;
        }

    // go to left wala part agar key choti hai to
        else{
            end = mid - 1;
        }
        mid = start + ((end - start) / 2) ;
    }
    return -1;
}

int main(){
    int even[6] = {2,4,6,8,10,12};
    int odd[5] = {1,3,5,7,8};

    int evenIndex = BinarySearch(even, 6, 12);
    cout<< "index of 12 in even array is " << evenIndex << endl;

    int oddIndex = BinarySearch(odd, 5, 7);
    cout<< "index of 7 in odd array is " << oddIndex << endl;


    return 0;
}
#include<iostream>
using namespace std;


int main(){

    //declarinr an array
    int number[15];

    cout<<"value of index 14 is: "<<number[14]<<endl;
    cout<<"value of index 7 is: "<<number[7]<<endl;
    cout<<"value of index 0 is: "<<number[0]<<endl;
    cout<<"value of index 20 is: "<<number[20]<<endl;  //here 20 shows undefined behaviour because we have declared the array of size 15 and we are trying to access the index which is out of bound.
    

    // int n;
    // cout<<"Enter the index: ";
    // cin>>n;

    // //accessing the array
    // cout<<"Value at "<<n<<" index is: "<<number[n];


}
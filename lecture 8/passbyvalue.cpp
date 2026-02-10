#include<iostream>
using namespace std;

void dummy(int n){
    cout<<"value of n is: "<<n<<endl;
}


int main(){

    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    dummy(n);
    cout<<"value of n is: "<<n;

}
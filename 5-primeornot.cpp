//  Prime or not
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a positive integer: ";
    cin>>n;
    int i =2;
    while(i<n){
        if(n%i==0){
            cout<<n <<"is not a prime number";
            i++;
            break;

        }
        else{
            cout<<n <<"is a prime number";
            break;

        }
    }

}
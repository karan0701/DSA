#include <iostream>
using namespace std;

bool isEven(int a){
    if(a%2==0){
        return true;
    }
    else{
        return false;  //mai else hata bhi sakta tha kyuki agar if case nahi chal rha to simple si baat hai ki number odd hoga to false hi return krega 
    }
}

int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;

    if(isEven(n)){
        cout<<"Number is even"<<endl;

    }
    else{
        cout<<"number is odd"<<endl;
    }
    


}
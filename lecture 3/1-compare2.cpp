// compare between two numbers
#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout<< "enter two numbers: ";
    cin>> a>> b;
    if(a<b){
        cout<<b<< "is greater than "<< a;
    }
    else if(a>b){
        cout<<a<< "is greater than" <<b;
    }
    else{
        cout<< "both are equal" ;
    }

}
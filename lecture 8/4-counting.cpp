#include <iostream>
using namespace std;

//function signature or function prototype
void printcounting(int n){     // void use kiya which shows ki ye function kuch return nahi karega


    // function body
   for (int i=1; i<=n; i++){
       cout<<i<<" ";
   }

}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;


    //yaha function call kiya hai
    printcounting(n);

}
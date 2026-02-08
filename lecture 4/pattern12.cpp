// print 
// A 
// BC 
// DEF 
// GHIJ

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int row=1;
    char ch='A';
    while(row<=n){
        int column=1;
        while(column<=row){
            cout<<ch<<" ";
            ch++;
            column++;
        }
        cout<< endl;
        row++;
    }
}
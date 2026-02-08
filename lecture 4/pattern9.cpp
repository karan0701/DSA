// print 
// ABC 
// DEF 
// GHI 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int row=1;
    char start= 'A';
    while(row<=n){
        int column=1;
        while(column<=n){
            cout<<start<<" ";
            start++;
            column++;
        }
        cout<<endl;
        row++;

    }
    
}
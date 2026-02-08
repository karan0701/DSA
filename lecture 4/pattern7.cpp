// print 
// ABC 
// ABC 
// ABC 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int row=1;
    while(row<=n){
        int column=1;
        while(column<=n){
            char ch = 'A' + row-1;
            cout<<ch<<" ";
            column++;

        }
        cout<<endl;
        row++;
    }
}
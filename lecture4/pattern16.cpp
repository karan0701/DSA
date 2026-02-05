// print 
// ****
//  ***
//   **
//    *

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int row=1;
    while(row<=n){
        int column=1;
        int space =1;
        while(space<row){
            cout<<" ";
            space++;
        }
        while(column<=n-row+1){
            cout<<"*";
            column++;
        }
        cout<<endl;
        row++;
    }
    

}
// print 
// 1
// 23
// 345
// 4567
#include <iostream>
using namespace std;    
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int row=1;
    while(row<=n){
        int column=1;
        int starting=row;
        while(column<=row){
            cout<<starting<<" " ;
            starting++;
            column++;
        }
        cout<<endl;
        row++;
    }
}
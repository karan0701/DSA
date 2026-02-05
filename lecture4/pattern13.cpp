// print 
// A 
// B C 
// C D E 
// D E F G
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int row=1;
    while(row<=n){
        int column=1;
        char start = 'A'+ row +column-2;
        while(column<=row){
            cout<< start <<" ";
            start++;
            column++;
        }
        cout<<endl;
        row++;

    }
}

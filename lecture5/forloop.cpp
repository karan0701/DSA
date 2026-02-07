#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<"Numbers btwn 1 to n is: ";
    for(int i=1; i<=n; i++){
        cout<<i<<" ";
    }
}


// break: current loop se bahar niklne ke liye... basically infinite loop se bachnne ke liye iska use krte hai..


// continue: current iteration ko skip krke next iteration pe jane ke liye... basically agar hume kisi condition me kuch nahi krna hai to uss condition me continue ka use krte hai.. in short continue ke baad wala part unreachable ho gya
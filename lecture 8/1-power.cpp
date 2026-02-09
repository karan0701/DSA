#include <iostream>
using namespace std;

int power(int num1, int num2){
    int ans = 1;
    for(int i=1; i<=num2; i++){
        ans = ans*num1;
        }
        return ans;
}

int main(){
    int a;
    cout<<"Enter the value: ";
    cin>>a;
    int b;
    cout<<"Enter the power: ";
    cin>>b;
    int ans = power(a,b);
    cout<<"answer of "<<a<<" raised to the power "<<b<<" is: "<<ans<<endl;

}
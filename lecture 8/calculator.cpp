#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Entr the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    char op;
    cout<<"Enter the operator: ";
    cin>>op;
    switch(op){
        case '+': cout<<"Sum is: "<<a+b<<endl;
        break;

        case '-': cout<<"Difference is: "<<a-b<<endl;
        break;

        case '*': cout<<"Product is: "<<a*b<<endl;
        break;

        case '/': cout<<"Quotient is: "<<a/b<<endl;
        break;

        case '%': cout<<"Remainder is: "<<a%b<<endl;
        break; 


        default: cout<<"Invalid Operator"<<endl;

    }
    
}
#include<iostream>
using namespace std;
int main(){
    int a=4;
    int b=6;
    cout<<"a&b: "<<(a&b)<<endl;  //AND operator
    cout<<"a|b: "<<(a|b)<<endl;  //OR operator
    cout<<"a^b: "<<(a^b)<<endl;  //XOR operator
    cout<<"~b: "<<(~b)<<endl;   //NOT operator



    cout<<"(17<<1): " <<(17<<1)<<endl; //Left shift operator - basically it means ki 17 ka multiply karo 2 se, sirf one time
    cout<<"(17<<4): " <<(17<<4)<<endl; // it means ki 17 ka 2 se miltiply kro , sirf 4 times


    cout<<"(17>>1): " <<(17>>1)<<endl; //Right shift operator - basically it means ki 17 ka divide karo 2 se, sirf one time
    cout<<"(17>>4): " <<(17>>4)<<endl; // it means ki 17 ka 2 se divide kro , sirf 4 times

}



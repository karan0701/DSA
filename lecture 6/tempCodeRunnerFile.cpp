#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int answer=0;
    int i=0;
    while(n!=0){
        int bit = n&1; //last bit nikalne ke liye
        int power = 1;
        for(int j = 0; j < i; j++) power *= 10; //calculate power of 10
        answer = (bit*power)+answer; //answer me bit add krne ke liye
        n = n>>1; //n ko right shift krke last bit hata denge
        i++; //i ko increment krke next bit ke liye ready ho jayenge
    }
    cout<<"Binary number is: "<<answer<<endl;
}
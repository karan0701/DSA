// farhenheit to celsius conversion
#include <iostream>
using namespace std;                                            
int main(){
    float f,c;
    cout<< "Enter the temp. in Farhenheit: ";
    cin>> f;
    c= (f-32)*5/9;
    cout<<"the temp in celcius is: "<<c;
    
}
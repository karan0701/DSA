// continue: current iteration ko skip krke next iteration pe jane ke liye... basically agar hume kisi condition me kuch nahi krna hai to uss condition me continue ka use krte hai.. in short continue ke baad wala part unreachable ho gya



#include <iostream>
using namespace std;
int main(){
    for(int i=1; i<=4; i++){
        cout<<"Hey "<<endl;
        cout<<"Hello "<<endl;
        continue;
        cout<<"Reply to karde";

    }
}
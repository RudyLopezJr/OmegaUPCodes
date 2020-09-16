#include <iostream>
using namespace std;

int main(){
    int a;
    cin>>a;

    if(a==0){
        cout<<"Nulo";
    }
    else if(a%2 == 0){
        cout<<"Par";
    }
    else{
        cout<<"Impar";
    }

    return 0;
}

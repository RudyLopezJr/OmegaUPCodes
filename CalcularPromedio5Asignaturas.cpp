#include <iostream>
using namespace std;

int main(){

    float acum = 0 , aux;

    for(int i=0 ; i<5 ; i++){
        cin>>aux;
        acum+= aux;
    }
    cout<< "El promedio es: "<<acum/5<<endl;


    return 0;
}

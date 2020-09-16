#include <iostream>
using namespace std;

int main(){
    int n,j;  //declaro los valores
    cin>>n>>j; //lee los valores

    //Condicion si n es mayor a j
    if(n>j){
        cout<<"El mayor es: "<<n<<endl;
        cout<<"El menor es: "<<j<<endl;
    }

    //Condicion si j es menor a n, igual se podría escribir (j>n)
    else if(n<j){
        cout<<"El mayor es: "<<j<<endl;
        cout<<"El menor es: "<<n<<endl;
    }

    //Si no se cumplió la condición la condición que queda es que los números son iguales
    else{
        cout<<"Los dos numeros son iguales"<<endl;
    }
    return 0;
}

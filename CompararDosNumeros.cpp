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

    //Condicion si j es menor a n, igual se podr�a escribir (j>n)
    else if(n<j){
        cout<<"El mayor es: "<<j<<endl;
        cout<<"El menor es: "<<n<<endl;
    }

    //Si no se cumpli� la condici�n la condici�n que queda es que los n�meros son iguales
    else{
        cout<<"Los dos numeros son iguales"<<endl;
    }
    return 0;
}

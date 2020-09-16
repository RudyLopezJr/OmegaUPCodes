#include <iostream>
using namespace std;

int main(){
    int x , y , aux;
    cin>>x>>y;
    cout<<y<<" "<<x;

    aux = x;
    x = y;
    y = aux;


    return 0;
}

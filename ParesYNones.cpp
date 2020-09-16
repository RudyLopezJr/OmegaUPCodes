#include <iostream>
using namespace std;

int main(){
    int n , m, apa = 0, non = 0, acum1 = 0, acum2 = 0 ,prome1, prome2 ;
    cin>>n;

    for(int i=0 ; i<n ; i++){
        cin>>m;
        if(m%2 == 0){
            apa++;
            acum1+=m;
        }
        else{
            non++;
            acum2+=m;
        }
    }

    prome1 = acum1/apa;
    prome2 = acum2/non;

    if(prome1 > prome2){
        cout<<"APARICIO";
    }
    else if(prome2 > prome1){
        cout<<"NONILA";
    }
    else{
        cout<<"EMPATE!";
    }

    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int n , aux = 1;
    bool vuelta = 0;
    cin>>n;
    for(int i=0; i<n ;i++){
        cout<<aux<<" ";
        if(aux == 5 && vuelta){
            vuelta = 0;
        }
        else if(aux == 1 && !vuelta ){
            vuelta = 1;
        }
        if(vuelta){
            aux++;
        }
        else{
            aux--;
        }
    }


    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int n = 0 , acum = 0;

    cin>>n;
    acum+=n;

    for(; n!=0;){
        cin>>n;
        acum+=n;
    }

    cout<<acum;
    return 0;
}

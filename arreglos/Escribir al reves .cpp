#include <iostream>
using namespace std;

int main(){
    string palabra;
    getline(cin, palabra);
    int n = palabra.length();
    for(int i=n-1 ; i>=0; i--){
        cout<<palabra[i];
    }
    return 0;
}

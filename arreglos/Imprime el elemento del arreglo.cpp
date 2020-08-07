#include <iostream>
using namespace std;

int main(){
    int n,m,k,arr[102];
    cin>>n;
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    cin>>m;
    for(int i=0; i<m ; i++){
        cin>>k;
        cout<<arr[k-1]<<" ";
    }
    return 0;
}

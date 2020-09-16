#include <iostream>
using namespace std;

int arr[]{1,2,3,1,2,3,1,2,3};

int main(){
    int n ,k, b ;
    cin>>n>>k;
    k%=3;
    if(n==1) b=3;
    else if(n==2) b=4;
    else b=5;
    cout<<arr[b-k]<<" "<<arr[b+k];

    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any no.: ";
    cin>>n;
    cout<<"Factors of a "<<n<< " are: ";

    for(int i=1; i<=n; i++){
        if(n%i==0){
        cout<<i<<" ";
        }
    }
    return 0;
}
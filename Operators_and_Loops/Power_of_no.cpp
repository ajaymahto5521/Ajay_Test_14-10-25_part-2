#include<iostream>
using namespace std;
int main(){
    int a, x;
    long long result =1;

    cout<<"Enter base: ";
    cin>>a;
    cout<<"Eneter exponent: ";
    cin>>x;

    if(x<0)
    {
        cout<<"Negative exponents not handled in integer form.";
        return 0;
    }
    for(int i=1; i<=x; i++)
    {
        result= result*a;
    }
    cout<<a<<"^"<<x<<" = "<<result;
    return 0;
}
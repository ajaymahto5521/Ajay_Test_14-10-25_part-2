#include<iostream>
using namespace std;
int main()
{
    int n, count=0;
    cout<<"Enter number: ";
    cin>>n;
    if (n < 0)
        n = -n;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    cout<<"No of digits: "<<count;
    return 0;
}
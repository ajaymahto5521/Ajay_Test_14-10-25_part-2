// Print the first N Fibonacci numbers
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no of terms.: ";
    cin>>n;
    long long a=0, b=1;
    cout<<"Fabonacci Series: ";
    for(int i=0; i<n; i++)
    {
       cout<<a<<" ";
       long long next = a+b;
       a=b;
       b=next;
        
    }
      
}
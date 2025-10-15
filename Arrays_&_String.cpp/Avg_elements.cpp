#include<iostream>
using namespace std;
int main(){
    int n;
    double sum=0, avg;
    cout<<"Enter no of elements: ";
    cin>>n;

    double arr[n];
    cout<<" Enter "<<n<<" elements";

    for(int i=0; i<n; i++){
    cin>>arr[i];
    sum=sum+arr[i];
    } 
    
    avg=sum/n;
    cout<<"Avg is: "<<avg;
    return 0;
}
#include<iostream>
using namespace std;

class BankAccount{
private:
    long long accno;
    string name;
    double balance;

public:
    BankAccount(){
        balance = 0.0;
    }

void deposit(){

    cout<<"Enter account number: ";
    cin>>accno;
    cout<<"Enter name: ";
    cin>>name;
    double amount;
    cout<<"Enter amount you want to deposit: ";
    cin>>amount;
    balance = balance + amount;
    cout<<"Amount deposited successfully!\n";
}

void withdraw(){
    double amount;
    cout<<"Enter amount to withdraw: ";
    cin>>amount;
    if(amount>balance)
    cout<<"Insuffecient Balance";
    else{
        balance = balance-amount;
        cout<<"Withdrawl successfull\n";
    }
}
void display(){
    cout<<"----Account Details----"<<endl;
    cout<<"Account Number: "<<accno<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Balance: "<<balance<<endl;
    }
};
int main()
{
    BankAccount acc;
    int choice;
    do{
        cout<<"\n1.Deposit\n2.Withdraw\n3.Display\n4.Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:acc.deposit(); break;
            case 2:acc.withdraw(); break;
            case 3:acc.display();break;
            case 4:cout<<"Thank you!\n";
            default: cout<<"Invalid choice!\n";
        }
        
    }
    while(choice !=4);
    return 0;
}
#include<iostream>
#include <string>
using namespace std;

struct Student{
        string name;
        int rollno;
        float marks;
};

int main(){

    Student s1;

    cout<<"Enter student name: ";
    getline(cin, s1.name);

    cout<<"Enter roll no.: ";
    cin>>s1.rollno;

    cout<<"Enter marks: ";
    cin>>s1.marks;


    cout<<"----Output Details----"<<endl;
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Roll no: "<<s1.rollno<<endl;
    cout<<"Marks: "<<s1.marks<<endl;

    
    return 0;
}
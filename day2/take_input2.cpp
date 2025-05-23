#include<iostream>
#include<string>
using namespace std;
int main(){
    int age=0;
    float marks=0;
    char gender;
    string name="";
    cout<<"enter a student age: "<<endl;
    cin>>age;
    cout<<"enter marks of student : "<<endl;
    cin>>marks;
    cout<<"enter gender of student : "<<endl;
    cin>>gender;
    cout<<"enter name of student : "<<endl;
    cin>>name;

    cout<<"Student details: "<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Gender: "<<gender<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Marks: "<<marks<<endl;

}
#include<iostream>
using namespace std;
class person{
protected:
    string name;
    int age;
    int weight;
    person()
    {
        cout<<"person constructor "<<endl;
    }
};
class student:public person 
{
    int roll_num;
public:
    student(string name,int age,int weight,int roll_num) 
    {
        cout<<"student constructor "<<endl;
        this->name=name;
        this->age=age;
        this->weight=weight;
        this->roll_num=roll_num;
        
    }
    void display(){
        cout<<"Student Details: "<<endl;
        cout<<"Student Name: "<<name<<endl;
        cout<<"Student Age: "<<age<<endl;
        cout<<"Student Weight: "<<weight<<endl;
        cout<<"Student Roll Number: "<<roll_num<<endl;
    }
};
int main()
{
    student s1("naveen",19,47,93);
    s1.display();
}
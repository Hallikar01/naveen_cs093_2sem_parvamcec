#include<iostream>
using namespace std;
class person{
protected:
    string name;
    int age;
    int weight;
public:
    person(string name,int age, int weight) : name(name),age(age),weight(weight)
    {
        cout<<"person constructor "<<endl;
    }
};
class student:public person 
{
    int roll_num;
public:
    student(string name,int age,int weight,int roll_num) : person(name, age, weight),roll_num(roll_num)
    {
        cout<<"student constructor "<<endl;
        
        
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
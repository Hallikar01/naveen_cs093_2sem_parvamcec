#include<iostream>
using namespace std;
class student{
private:
    string name;
    int roll_num;
public:

    student(string name,int roll) : name(name),roll_num(roll)
    {
        cout<<"constructor is called "<<endl;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll Number: "<<roll_num<<endl;
    }
};
int main()
{
    //object
    student s1("naveen",102);
    s1.display();
}
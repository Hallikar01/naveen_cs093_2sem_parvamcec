#include<iostream>
using namespace std;

class Student
{
    private:
    string name;
    int roll_num;
 public:   
    string getName()
    {
        return this->name;
    }
    int getrollNum()
    {
        return this->roll_num;
    }
    void setName(string name)
    {
        this->name=name;
    }
    void setRollnum(int roll)
    {
        this->roll_num=roll;
    }
};
int main()
{
    Student s1;
    s1.setName("ryan");
    s1.setRollnum(120);
    cout<<"name is :"<<s1.getName()<<endl;
    cout<<"roll Num is:"<<s1.getrollNum()<<endl;
    return 0;
}
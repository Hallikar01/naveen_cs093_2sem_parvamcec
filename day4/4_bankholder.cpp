#include<iostream>
using namespace std;

class  BankAccount
{
    private:
    string name;
    int acc_num;
 public:   
    string getholder_Name()
    {
        return this->acc_num;
    }
    int getacc_num()
    {
        return this->acc_num;
    }
    void setholder_name(string holder_name)
    {
        this->holder_name=holder_name;
    }
    void setac_num(int accnum)
    {
        this->acc_num=accnum;
    }
};
int main()
{
    BankAccount b1;
    b1.setholder_name("naveen");
    b1.setacc_num(120);
    cout<<"holder_name is :"<<b1.getholder_name()<<endl;
    cout<<"acc_num is:"<<b1.getacc_num()<<endl;
    return 0;
}
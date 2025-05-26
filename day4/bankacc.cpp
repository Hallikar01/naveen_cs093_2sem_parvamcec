#include<iostream>
using namespace std;

class BankAccount{
    string holder_name;
    public:
    BankAccount(string name){
        this->holder_name=name;
        cout<<"constructor called for:"<<this->holder_name<<endl;
    }
        ~BankAccount(){
            cout<<"destructor called for:"<< holder_name <<endl;
        }
};
int main(){
    BankAccount b1("naveen");
    BankAccount b2("pavan");
    BankAccount b3("rohan");
    return 0;

}

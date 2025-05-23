#include<iostream>
using namespace std;


class BankAccount{
    public:
    string holder_name;
    int ac_no;
    //construvtor
    
    BankAccount(string name,int ac_no){
        cout<<"constructor is  called automatically "<<endl;
        this->holder_name= name;
        this->ac_no= ac_no;
    }
    BankAccount(BankAccount &b1){
        this->holder_name=b1.holder_name;
        this->ac_no=b1.ac_no;
    }
    void display(){
        cout<<"holder_name: "<<this->holder_name<<endl;
        cout<<"Account number: "<<ac_no<<endl;
    }
};
int main(){
    BankAccount b1("naveen",102);
    b1.display();
    BankAccount b2=b1;
    b2.display();
    return 0;
}    
#include<iostream>
using namespace std;
class BankAccount{
    public:
    string holder_name;
    int ac_no;
};
int main(){
    BankAccount b1;
    b1.holder_name = "naveen";
    b1.ac_no = 100;

    cout<<"holder_name: "<<b1.holder_name<<endl;
    cout<<"Account number: "<<b1.ac_no<<endl;
    return 0;
}
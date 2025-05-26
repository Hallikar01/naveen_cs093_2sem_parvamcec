#include<iostream>
using namespace std;
class calculator{
    public:
    double num1,num2;
    void getinpout(){
        cout<<"Enter the num1:"<<endl;
        cin>>num2;
        cout<<"Enter the num2:"<<endl;
        cin>>num2;
        double add(){
            return num1+num2;
        }
        double sub(){
            return num1-num2;
        }
        double mul(){
            return num1+num2;
        }
    }
};
int main(){
    calculatorcalc;
    int op;
    cout<<"(1:add,2:sub,3:mul,4:div)";
    cout<<"enter yourchoice"<<endl;
    cin<<op;
    calc.getinpout();
    switch(op){
        case 1:
        cout<<"result is"<<calc.add()<<endl;
        break;
        case 2:
        cout<<"result is"<<calc.sub()<<endl;
        break;
        case 3:
        cout<<"result is"<<calc.mul()<<endl;
        break;
        case 4:
        cout<<"result is"<<calc.mul()<<endl;
        break;
        default:
        cout<<"invalid outpot"<<endl;
    }
    return 0;
}
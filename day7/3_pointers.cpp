#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    cout<<"Address of a: "<<&a<<endl;
    int *ptr=&a;
    cout<<"ptr value: "<<ptr<<endl;
    cout<<"ptr address: "<<&ptr<<endl;
    cout<<"values of a using a: "<<a<<endl;
    cout<<"value of a using ptr: "<<*ptr<<endl;
    return 0;
}
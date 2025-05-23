/*
1. function declaration
2.function definition
        return_type name_function(....parametrers)
3.function call
*/
#include<iostream>
using namespace std;
//function declaration
int add(int num1,int num2);
int main()
{
int a=80;
int b=30;
int res=add(a,b);
cout<<"the result1 is:"<<res<<endl;
int c=2099;
int d=4024;
int res1=add(c,d);
cout<<"the result2 is:"<<res1<<endl;


}
//function definition 
int add(int num1,int num2){
    int sum=num1+num2;
    return sum;
}


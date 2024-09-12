#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"enter the first number:";
    cin>>num1;
    cout<<"enter the second number:";
    cin>>num2;
    cout<<"befor swapping:first number:"<<num1<<"second number:"<<num2;
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    cout<<"after swapping: first number="<<num1<<"second number="<<num2<<endl;
    return 0;
}
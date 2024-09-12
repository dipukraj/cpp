#include<iostream>
using namespace std;
int main()
{
    int num1,num2,temp;
    cout<<"enter 1st number:";
    cin>>num1;
    cout<<"enter 2nd number:";
    cin>>num2;
    cout<<"before swapping:1st number:"<<num1<<"2nd number:"<<num2;

    temp=num1;
    num1=num2;
    num2=temp;
    
    cout<<"\n after swapping:1st number:"<<num1<<"2nd number:"<<num2;
    return 0;
}
/*4. Write a program that asks the user to enter integers as inputs to be stored in the variables 'a'
and 'b' respectively. There are also two integer pointers named ptrA and ptrB. Assign the
values of 'a' and 'b' to ptrA and ptrB respectively, and display them.*/

#include<iostream>

using namespace std;
int main()
{
    int a,b;
    cout<<"Enter your first number: ";
    cin>>a;
    cout<<"Enter your Second number: ";
    cin>>b;
    int* ptr=&a;
    int* ptr2=&b;

    cout<<*ptr<<endl;
    cout<<*ptr2<<endl;



}
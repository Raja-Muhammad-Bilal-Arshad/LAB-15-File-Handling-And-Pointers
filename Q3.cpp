
/*3. Write a program to add two numbers.
a. Write a C++ program that creates a file.
b. Ask the user to input two numbers
c. Take their sum and store in variable.
d. Write both numbers and their sum in file.
e. Now read it from the file and display.*/

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    int a,b,sum;
    cin>>a;
    cin>>b;
    sum=a+b;
    ofstream write("mysecondfile.txt");
    if(write.is_open())
    {
        write<<a<<" + "<<b<<" = "<<sum;

        write.close();
    }
    else
    {
        cout<<"Error";
        return 1;

    }
    string s;


 cout<<endl;
 cout<<endl;

        ifstream read("mysecondfile.txt");
        if(read.is_open())
        {
            getline(read,s);
            cout<<s;

        }
        else
        {
            cout<<"ERROR";
            return 1;
        }






}

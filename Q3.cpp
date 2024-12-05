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

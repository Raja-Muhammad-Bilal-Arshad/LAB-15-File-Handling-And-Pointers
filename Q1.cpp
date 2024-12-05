
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    ofstream outputfile("firstfile.txt");
    if(outputfile.is_open())
    {
            outputfile<<s;
        outputfile.close();
    }
    else
    {
        cout<<"Your file is not open..";
        return 1;
    }
}
/*2. Write a program that opens an already created file firstfile.txt (that you have created in the
first question). Now read the data of the file and display it. (Read the data until you reach the
end of file). Now remove all the text from the file.*/

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    string s;
    ifstream infile("firstfile.txt");
    if(infile.is_open())
    {
        getline(infile,s);
        cout<<s;
        infile.close();

    }
    else
    {
        cout<<"Your file is not open";
        return 1;
    }
}
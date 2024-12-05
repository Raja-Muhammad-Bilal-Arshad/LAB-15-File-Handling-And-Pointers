/*1. Write a program that creates a text file named firstfile.txt. Now open this file and write the
following sentences in the file “My name is……. I am a student of BS CS 1st semester. My
roll number is …….. I am taking the course of PF. This is my first created file”. Now close
the file.*/
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
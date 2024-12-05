//5. Write a program to store n elements in an array and print the elements using a pointer.

#include<iostream>
using namespace std;





int main()
{
   int array[5];

   for(int i=0;i<5;i++)
   {
    cin>>array[i];
   }

   int* ptr[5];
   
   for(int i=0;i<5;i++)
   ptr[i]=&array[i];

   for(int i=0;i<5;i++)
   {
    cout<<"element - "<<i<<" : "<< *ptr[i]<<endl;
   }
}
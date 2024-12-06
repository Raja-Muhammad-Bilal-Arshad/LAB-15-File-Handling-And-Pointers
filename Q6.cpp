//6. Write a program in C++ to swap elements using call by reference.

#include<iostream>
using namespace std;

void swap(int* ptr, int* ptr2);
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
   int a,b;
   cout<<"Enter the First element you want to swap : "<<endl;
   cin>>a;
   cout<<"Enter the Second element you want to swap : "<<endl;
   cin>>b;
   swap(&array[a],&array[b]);
   cout<<endl<<endl;

 for(int i=0;i<5;i++)
   {
    cout<<"element - "<<i<<" : "<< *ptr[i]<<endl;
   }
}







void swap(int* ptr, int* ptr2)
{
   int temp;
   temp=*ptr;
   *ptr=*ptr2;
   *ptr2=temp;

}



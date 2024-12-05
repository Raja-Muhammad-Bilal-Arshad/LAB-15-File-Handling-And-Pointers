/*5. Write a program to store n elements in an array and print the elements using a pointer.
Test Data :
Input the number of elements to store in the array :5
Input 5 number of elements in the array :
element - 0 : 5
element - 1 : 7
element - 2 : 2
element - 3 : 9
element - 4 : 8
Expected Output :
The elements you entered are :
element - 0 : 5
element - 1 : 7
element - 2 : 2
element - 3 : 9
element - 4 : 8
*/

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
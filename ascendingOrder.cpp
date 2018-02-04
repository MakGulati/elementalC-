/*Goal: Practice array manipulation in C++. 
**The user will input 40 integers. 
**Put them into an array. Then print the array in the order the numbers were
**entered. Then print in reverse order. Then sort the array in ascending order 
**and print it. 
**The each print of the array should separate the numbers in the array by
**one space. 
**For example: the array were [3,4,55] the printout would be 3 4 55
*/

#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int userInput[40];
    for(int i = 0; i <40; i++)
    {cout<< "enter no. "<<i+1<<endl;
     cin>>userInput[i];
    }
    cout<< "correct order\n";
    for(int i = 0; i <40; i++)
    {cout<<userInput[i]<<" ";
     
    }
    cout<< "\nreverse order\n";
    for(int i = 39; i>=0 ; i--)
    {cout<<userInput[i]<<" ";
     
    }
    cout<< "\nascending order\n";
    int small=userInput[0];
    int userInput1[40];
    for(int n=0;n<40;n++)
   { 
    for(int i = 0; i<40 ; i++)
    { if (userInput[i]<small)
       {   small=userInput[i];
           
       }
       
    }
    userInput1[n]=small;
    cout<<userInput1[n]<<" "; 
   }
    return 0;
}
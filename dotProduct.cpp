/*Goal: practice using multidimensional arrays.
**Write a program that will accept values for a 4x4 array 
**and a vector of size 4. 
**Use the dot product to multiply the array by the vector. 
**Print the resulting vector. 
*/

#include<iostream>
using namespace std;

int main()

{int a[4][4];
 int b[4];
 int c[4]={0,0,0,0};
    for(int i=0;i<4;i++)
      { for(int j=0;j<4;j++)
          {cout<< "enter"<<i<<","<<j<<endl;
              cin>>a[i][j];
          }
    //TODO: multiply a 4x4 array with vector of size 4. 
    //Print the resultant product vector
      }
      for(int i=0;i<4;i++)
      {cout<<"enter vector values "<<i<<endl;
          cin>>b[i];
      }
      for(int i=0;i<4;i++)
      { for(int j=0;j<4;j++)
          {
             c[i]=c[i]+a[i][j]*b[j];
          }
           cout<<c[i]<<" ";
    //TODO: multiply a 4x4 array with vector of size 4. 
    //Print the resultant product vector
      }
      
    return 0;
}
#include<iostream>
using namespace std;
void swap(int *x,int *y);
int main()

{
    int a=10;
    int b=20;
    cout<<"a = "<<a<<", b = "<<b;
    swap(&a,&b);






return(0);
}
void swap(int *x,int *y)
{int temp=*x;
    *x=*y;
    *y=temp;
    cout<<"a = "<<*x<<", b = "<<*y;

}
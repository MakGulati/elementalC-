#include<iostream>
using namespace std;
void swap(int &x,int &y);
int main()
{ int a=100;
	int b=500;
	cout<<"before; "<<" first = "<<a<<" second = "<<b<<endl;
	swap(a,b);



	return 0;
}
void swap(int &x,int &y)
{int temp=x;
 x=y;
 y=temp;
cout<<"after; "<<" first = "<<x<<" second = "<<y<<endl;}
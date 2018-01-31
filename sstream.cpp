#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
	string length;
	float foot, inches_length;
	cout<<"Enter footlength\n";
	getline(cin,length);
	stringstream(length) >>foot;
	cout<<"Entered footlength="<<foot<<"\n";
	inches_length=foot*12;
	cout<<inches_length<<"\n";
	return(0);
}
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{string length,width;
float l,w,a;
cout<<"what's the length of the room\n";
getline(cin,length);
stringstream(length)>>l;
cout<<"tell me the width\n";
getline(cin,width);
stringstream(width)>>w;
a=l*w;
cout<<"area of the room= "<<a;
return(0);
}
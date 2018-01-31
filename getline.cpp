/*Goal: practice std::cin for strings
**Write a program that prompts two users for their
**name, address, and phone number. 
**Print the information to the console in the following format:
**name
**\/t\/t address
**\/t\/tphone number
*/
#include<iostream>
#include<string>
using namespace std;
int main()

{string name1,address1,phone_number1;
string name2,address2,phone_number2 ;
 cout<<"Enter your name\n";
 getline(cin,name1);
 cout<<"Enter your address\n";
 getline(cin,address1);
 cout<<"Enter your phone number\n";
 getline(cin,phone_number1);
 cout<<"Enter your name\n";
 getline(cin,name2);
 cout<<"Enter your address\n";
 getline(cin,address2);
 cout<<"Enter your phone number\n";
 getline(cin,phone_number2);
cout<<name1<<"\n"<<"\t\t "<<address1<<"\n\t\t"<<phone_number1<<"\n";
cout<<name2<<"\n"<<"\t\t "<<address2<<"\n\t\t"<<phone_number2<<"\n";
return(0);
}
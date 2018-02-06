/*Header file for main.cpp
**Create a class called Cat.
**Create the following members:
**private members: name, breed, age
**public members: setName, setBreed,setAge
**getName, getBreed, getAge, printInfo*/

#include<iostream>

using namespace std;
 
class Cat
{string name;
 string breed;
 int age;
 public:
   void setName(string nameIn)
{
    name=nameIn;
}
void setBreed(string breedIn)
{
    breed=breedIn;
}
void setAge(int ageIn)
{
    age=ageIn;
}
string getName()
{
    return name;
}
string getBreed()
{
    return breed;
}
int getAge()
{
    return age;
}
void printInfo()
{
    cout<<getName()<<"  "<<getBreed()<<"  "<<getAge()<<"\n\n";  
}   

};



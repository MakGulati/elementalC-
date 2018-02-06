#include <iostream>
using namespace std;
class student
{ string name;
  int id;
  int gradyear;	
public:
	void setName(string nameIn);
	void setId(int idIn);
	void setGradyear(int gradyearIn);
	string getName();
	int getId();
	int getGradyear();
	void print();
	
};

void student::setName(string nameIn)
{name=nameIn;
}

void student::setId(int idIn)
{id=idIn;
}

void student::setGradyear(int gradyearIn)
{
	gradyear=gradyearIn;
}

string student::getName()
{
	return(name);
}

int student::getId()
{
	return(id);
}

int student::getGradyear()
{
	return(gradyear);
}

void student::print()
{
  cout<<getName()<<"\t"<<getId()<<"\t"<<getGradyear();
}

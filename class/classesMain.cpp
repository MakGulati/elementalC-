#include "classes.hpp"

int main()
{ 
	int integer=10;
	float floating_pt=2.77;
	student student1;
	student1.setName("Mayank");
	student1.setId(06);
	student1.setGradyear(2017);
	student1.print();
    cout<<"\n \n";
    cout<<integer<<"  "<<floating_pt<<endl;
    cout<<student1.getName()<<"  "<<student1.getId()<<"\n";

	return 0;

}

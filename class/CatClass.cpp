/*Goal: practice creating and using classes.
**Create a class called Cat.
**Create the following members:
**private members: name, breed, age
**public members: setName, setBreed,setAge
**getName, getBreed, getAge, printInfo*/

#include"CatClass.hpp"

int main()
{
    Cat cat1,cat2;
    cat1.setName("Ell");
    cat1.setBreed("X");
    cat2.setName("Felli");
    cat2.setBreed("Z");
    cat2.setAge(7);
    cat1.setAge(4);
    cat1.printInfo();
    cout<<cat2.getName()<<endl<<cat2.getAge()<<endl;
    
    return 0;
}
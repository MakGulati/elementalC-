There is a special function member that we need to talk about, constructors. 

A constructor is special function that is executed whenever we create a new instance of the class. It is used to set initial values of data members of the class. 

For example, in our Cats class we may want to have an initial value for the age of a cat and it's breed. If we set initial values, we do not need to require the program or user set every value. 

Constructors do not return a value, including void. 

The declaration for a constructor is:

ClassName::ClassName();
The definition of a constructor is:

ClassName::ClassName()
{
     dataMemberName1 = value;
     dataMemberName2 = value;
     ...
}
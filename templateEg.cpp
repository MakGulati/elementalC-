#include<iostream>
using namespace std;



template <typename T>  //tell the compiler we are using a template
T findSmaller(T input1,T input2);

int main()
{
	int a = 54; 
    int b = 89;
    float f1 = 7.8;
    float f2 = 9.1;
    char c1 = 'f';
    char c2 = 'h';
    string s1 = "Hello";
    string s2 = "Bots are fun";
    



    cout<<"\n Smaller integer : "<<findSmaller(a,b)<<"\n";

    cout<<"\n Smaller float : "<<findSmaller(f1,f2)<<"\n";

    cout<<"\n Smaller char : "<<findSmaller(c1,c2)<<"\n";

    cout<<"\n Smaller string : "<<findSmaller(s1,s2)<<"\n";

	return 0;
}

template <typename T>
T findSmaller(T input1,T input2)
{
    if(input1 < input2)
        return input1;
    else
        return input2;
}

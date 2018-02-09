/*header file*/
#include<iostream>
using namespace std;

template <class T>
class Multiplier
{
    T inp1;
    T inp2;
    T prod;
    
    public: 
    
    void setM1(T in1);
    void setM2(T in2);
    void setProduct();
    void printEquation();
    
};

    template<class T>
    void Multiplier<T>:: setM1(T in1)
    {
        inp1=in1;
    }
    template<class T>
    void Multiplier<T>::setM2(T in2)
    {
       inp2=in2; 
    }
    template<class T>
    void Multiplier<T>::setProduct()
    {
        prod=inp1*inp2;
    }
    template<class T>
    void Multiplier<T>::printEquation()
    {
        cout<<inp1<< "*"<<inp2<<"="<<prod;
    }
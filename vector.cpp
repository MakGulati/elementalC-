#include"vhead.hpp"

int main()
{
	vector<float> vFloat;
	cout<<"initial size  "<<vFloat.size()<<endl;
	vFloat.assign(5,10);
	cout<<"final size  "<<vFloat.size()<<endl;
	printVect(vFloat);
	return 0;
}
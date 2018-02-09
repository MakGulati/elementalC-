#include<iostream>
#include<vector>
using namespace std;

void printVect(vector<float> vIn)
 {

for(vector<float>::iterator it=vIn.begin();it<vIn.end();it++)
{
	cout<<*it<<"  ";
}

}
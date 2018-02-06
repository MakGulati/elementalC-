#include<iostream>
#include<iomanip>
//#include"mainFunctions.cpp"
using namespace std;
class Name
{string userName;
 


public:
Name();
void Name_Prom();
void print(); 

};
class Gameboard
{
    int pos;
    char pos_val;
    char gameSpace[4][4];
public:
    Gameboard();
    void Pos_Prom();
    void setGameSpace(int rc, char value);
    char getGameSpace(int row,int column);
    int fourInRow();
    int fourInCol();
    int fourInDiag1();
    int fourInDiag2();
    
    void printInfo();
};

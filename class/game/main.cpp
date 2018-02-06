#include"mainClasses.cpp"
#include"mainFunctions.cpp"
int main()
{
    Name name1,name2;
    name1.Name_Prom();
    name2.Name_Prom();
    name1.print();
    name2.print();
    Gameboard G1,G2;
    /*G1.setGameSpace(1, 'x');
    G2.setGameSpace(5, 'o');
    G1.setGameSpace(2, 'x');
    G2.setGameSpace(6, 'o');
    G1.setGameSpace(3, 'x');
    G2.setGameSpace(7, 'o');
    G1.setGameSpace(4, 'x');
    G2.setGameSpace(8, 'o');*/
    G1.Pos_Prom();
    G1.printInfo(); 
    return 0;
}
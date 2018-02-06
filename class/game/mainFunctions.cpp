
Name::Name()
{
    userName="Unknown";
    
}

void Name::Name_Prom()
{
   
   cout<<"Enter user name \n";
   getline(cin,userName);
    
}
void Name::print()
{
    cout<<"Name= "<< userName<<"\n";
}

//Gameboard
void Gameboard::Pos_Prom()
{   int one=0;
    int two=0;
    int three=0;
    int four=0;
    
    for (int i=0;i<16;i++)
    
   {
   
  while((one||two||three||four)==0)
    {
    
    cout<<"Enter Next Position : \n";
    cin>>pos;
    cout<<"Position value x or o\n";
    cin>>pos_val;
    setGameSpace(pos,pos_val);
    switch (fourInRow())
    
    {   
        case 1:{cout<<"Winner : X";
               one=1;
               break;}
        case 2:{cout<<"Winner : O";
               one=1;
               break;}
        
    }
    
    switch (fourInCol())
    
    {   
        case 1:cout<<"Winner : X";
               two=1;
               break;
        case 2:cout<<"Winner : O";
               two=1;
               break;
        
    }
    /*switch (fourInDiag1())
    
    {   
        case 1:cout<<"Winner : X";
               three=1;
               break;
        case 2:cout<<"Winner : O";
               three=1;
               break;
        
    }*/
    
    /*switch (fourInDiag2())
    
    {   
        case 1:cout<<"Winner : X";
               four=1;
               break;
        case 2:cout<<"Winner : O";
               four=1;
               break;
        
    }*/
    
    
   }
    }
   //cout<<(one||two||three||four);
   if((one||two||three||four)==0)
   {
       cout<<"Game is Tie"<<endl;
   }
}

Gameboard::Gameboard()
{
    pos=-1;
    for(int i=0;i<4; i++)
        for(int j=0;j<4; j++)
        {
            gameSpace[i][j] = '-';
        }
}
void Gameboard::setGameSpace(int rc,char value)
{   int row,col;
    switch(rc)
    {
        case 1:row=0;
               col=0;
               break;
        case 2:row=0;
               col=1;
               break;
        case 3:row=0;
               col=2;
               break;
        case 4:row=0;
               col=3;
               break;
        case 5:row=1;
               col=0;
               break;
        case 6:row=1;
               col=1;
               break;
        case 7:row=1;
               col=2;
               break;
        case 8:row=1;
               col=3;
               break;
        case 9:row=2;
               col=0;
               break;
        case 10:row=2;
               col=1;
               break;
        case 11:row=2;
               col=2;
               break;
        case 12:row=2;
               col=3;
               break;
        case 13:row=3;
               col=0;
               break;
        case 14:row=3;
               col=1;
               break;
        case 15:row=3;
               col=2;
               break;
        case 16:row=3;
               col=3;
               break;       
    }
    gameSpace[row][col] = value;
}

char Gameboard::getGameSpace(int row,int column)
{
    return gameSpace[row][column];
}

int Gameboard::fourInRow()
{
    
    for(int i=0;i<4; i++)
    {
        int countx = 0;
        int counto = 0;
        for(int j=0;j<4; j++)
        {
            if(gameSpace[i][j]=='x')
            {
                countx++;
                
            }
            if(gameSpace[i][j]=='o')
            {
                counto++;
                
            }
        }
        if(countx == 4)
            return 1;
        if(counto == 4)
            return 2;    
    }
    return 0;
}

int Gameboard::fourInCol()
{
    
    for(int j=0;j<4; j++)
    {
        int countx = 0;
        int counto = 0;
        for(int i=0;i<4; i++)
        {
            if(gameSpace[i][j]=='x')
            {
                countx++;
                
            }
            if(gameSpace[i][j]=='o')
            {
                counto++;
                
            }
        }
        if(countx == 4)
            return 1;
        if(counto == 4)
            return 2;    
    }
    return 0;
}

//Diag1
int Gameboard::fourInDiag1()
{
    for(int i=0;i<4; i++)
    {
        int countx = 0;
        int counto = 0;
        for(int j=0;j<4; j++)
        {	while(i==j)
        	{
            if(gameSpace[i][j]=='x')
            {
                countx++;
                
            }
            if(gameSpace[i][j]=='o')
            {
                counto++;
                
            }
            }
        }
        if(countx == 4)
            return 1;
        if(counto == 4)
            return 2;    
    }
    return 0;
}
//Diag2
int Gameboard::fourInDiag2()
{
    for(int i=0;i<4; i++)
    {
        int countx = 0;
        int counto = 0;
        for(int j=0;j<4; j ++)
        {   while((i+j)==3)
            {if(gameSpace[i][j]=='x')
            {
                countx++;
                
            }
            if(gameSpace[i][j]=='o')
            {
                counto++;
                
            }
            }
        }
        if(countx == 4)
            return 1;
        if(counto == 4)
            return 2;    
    }
    return 0;
}
void Gameboard::printInfo()
{
    cout<<std::setw(5);
    cout<<"\n";
    for(int i=0;i<4; i++)
    {
        for(int j=0;j<4; j++)
        {
            cout<<gameSpace[i][j]<<"  ";
        }
        cout<<"\n"; 
    }
}
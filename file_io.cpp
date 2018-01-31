#include "main.hpp"
string line;
int main()
{ofstream file1("mytext.txt",ios::trunc);
	
	{if(file1.is_open())
      {file1<<"first line\n";
       file1<<"second line";
   file1.close();}
   
     else{cout<<"Error in opening the file\n";} 

	}
	
	ifstream file0("mytext.txt");
	{if(file0.is_open())
     {while(getline(file0,line))
      cout<<line<<"\n";
      file0.close();
     }
     else{cout<<"Error in opening the file\n";}


	}
	
	return 0;
}

# include <iostream>
# include <string>
using namespace std;
class person
{
public:
	person(){lname = ""; fname[0] = '\0'; }
	person(const string & ln,  char * fn= "samy")
	{lname=ln;   
	
	}
	// the following methods display lname and fname
   void Show()  // firstname lastname format
   {  string string1;
	  // string1 = fname;
   for(int i=0;i<lname.length();i++)
	   string1[i]=fname[i];
	   cout<<string1<<" "<<lname<<endl;     }
   void FormalShow()  // lastname, firstname format
   { 
	   string string1;
	   for(int i=0;i<string1.length();i++)
	   string1[i]=fname[i];
	   cout<<lname<<","<<string1<<endl;   
	  
   }

private:
//	static const LIMIT = 25;
   string lname; // Person’s last name
   char fname[25]; // Person’s first name
};
void main()
{
	person one;
	person two("Rana");
    one.Show();
	two.Show();
	two.FormalShow();
	system("pause");


}

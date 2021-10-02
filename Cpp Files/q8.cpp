#include <iostream>
#include <iomanip>

using namespace std;

//Prototype declaration

int main()
{
	int lines, cheers, c, l;
	
	do{
	
		
		cout << "Enter number of lines\n";
		cin >> lines;
		cout << "Enter number of cheers\n";
		cin >> cheers;
		
		if((lines<=0)||(cheers<=0))
		{
			cout << "Enter a positive number in both cases\n";		
		}
		
	  }while((lines<=0)||(cheers<=0));
	
	
	l=lines;
	c=cheers;
	
	for (int i=0, k=0;i<l;i++, k+=3)
	{
		c=cheers;
		cout << setw(k) << "";
		if(c==1)
			cout << "Go";
		else
		{
			cout << "Go";
			
			c--;
			
			do
			{
				cout << "BuddyGo";
				c--;
			}while(c!=0);
			
		}
		cout << endl;
	}
	
	return 0;
}
























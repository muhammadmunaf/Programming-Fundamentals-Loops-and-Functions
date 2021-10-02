#include <iostream>
#include <iomanip>

using namespace std;

//Prototype declaration
void print();

int main()
{
	print();
	
	return 0;
}


void print()
{
	int x=0, w=21;
	for (int i=0;i<6;i++)
	{
		for (int j=0;j<22;j++)
		{
			if (i==0)
				cout << "!";
			else 
			{
				if(j<x)
				{
					cout << "\\";
					
				}
				else if (j>w)
				{
					cout << "/";
					
				}
				else
					cout << "!";
			}			
		}
		cout << endl;
		x+=2;
			w-=2;
	}
}








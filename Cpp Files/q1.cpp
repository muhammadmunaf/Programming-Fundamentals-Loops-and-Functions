#include <iostream>
#include <iomanip>

using namespace std;

//Prototypes Declaration
void PrintTables(int);


int main()
{
	int num;
	
	cout << "Enter a 4 digit number\n";
	cin >> num;
	
	PrintTables(num);
	
	return 0;
}


void PrintTables(int n)
{
	//checking digits
	int num1,num2,num3,num4;
	
	num1 = n/1000;
	num2 = (n/100)%10;
	num3 = (n/10)%10;
	num4 = n%10;
	
	/*
	cout << num1 << endl;
	cout << num2 << endl;
	cout << num3 << endl;
	cout << num4 << endl;
	*/
	
	//forming tables
	
	for (;num1<(num2+1);num1++)
	{
		cout << (num3) << " * " << num1 << " = " << left << setw(4) << (num1*num3);
		cout << setw(6) << " ";
		cout << (num4) << " * " << num1 << " = " << (num1*num4);
		cout << endl;
	}
	
}





















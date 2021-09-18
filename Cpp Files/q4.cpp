/* Muhammad Munaf Ul Hassan
i200891 */

#include <iostream>
#include <iomanip>

using namespace std;

//Prototype declaration

void print(int);

int main()
{
	int rows;
	
	cout << "Enter number of rows\n";
	cin >> rows;
	
	print(rows);
	
	return 0;
}


void print(int r)
{

	char ch=65;
	int n=1, k=r;
	
	for (int i=0;i<r; i++) //for rows
	{
		cout << setw(k);
		for (int j=1; j<=n; j++) // for columns
		{
		
			cout << ch;
			ch++;
		}
		cout << endl;
		n+=2;
		k--;
	}
	
	k++;
	n=n-2;
	for (int i=r;i>0; i--) //for rows
	{
		cout << setw(k);
		for (int j=1; j<=n; j++) // for columns
		{
		
			cout << ch;
			ch++;
		}
		cout << endl;
		n-=2;
		k++;
	}
}























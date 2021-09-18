/* Muhammad Munaf Ul Hassan
i200891 */

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

//Prototype declaration
void higherlower();
void paperrock();
void guessnumber();
int generator();



int main()
{

	int option=0;

	cout << "Welcome to Guessing Games\n";
	
	do 
	{
		cout << endl;
		cout << "1. Play Higher or Lower\n"
		<< "2. Play Paper - Scissors - Rock\n"
		<< "3. Play Guess the Numbers\n"
		<< "4. Quit\n";
		cin >> option;
		
		switch(option)
		{
			case 1:
				higherlower();
				cin.ignore(100,'\n');
				break;
			case 2:
				paperrock();
				break;
			case 3:
				guessnumber();
				break;
			case 4:
				cout << "The Program will now end\n";
				exit(0);
				break;
			default:
				cout << "You have selected an invalid option\n"
				<< "Please select again\n";
				cout << endl;
				continue;
				break;	
		}
	
	}while(1); //incase 4 is selected the program will end through 'exit(0)' 
	
	cout << "The Program will now end\n";
	
	return 0;
}


int generator()
{
	int num;
	
	srand(time(NULL));
	num = rand()%20;
	
	
	
	return num;
	
}


void higherlower()
{
	int num, num1, num2;
	char option;

	cout << endl;
	cout << "2 random numbers will be generated and you have to guess whether the 2nd number is larger or smaller than the previous one.\n";
	

	srand(time(0));
	
	for(int i=0;i<2;i++)
	{	
		do
		{
			num = rand()%20;
			
		}while(num<0);
		
		if(i==0)
			num1=num;
		if(i==1)
			num2=num;		
		
	}
	cout << endl;
	cout << "First number is " << num1 << endl;
	cout << endl;
	cout << "For higher use H, for lower use L\n";
	cin >> option;
	
	cout << endl;
	
	switch(option)
	{
		case 'H':
			if(num1<num2)
				cout << "You win! You have correctly guessed it\n";
			else
				cout << "You lose! You have not guessed it correctly\n";
			break;
		case 'L':
			if(num1>num2)
				cout << "You win! You have correctly guessed it\n";
			else
				cout << "You lose! You have not guessed it correctly\n";
			break;
		default:
			cout << "You selected an invalid optoin\n";
			break;
	}
	
}


void paperrock()
{
	int num=0, user=0;
	char option=0;	
	
	
	do
	{
		srand(time(0));
		num = rand()%4;
			
	}while(num<1);
	
	
	// 1=p, 2=s, 3=r
	
	
	cout << "You will be playing rock paper scissors against the computer!\n" << endl
	<< "Select an option:\n"
	<< "R for Rock\n" << "S for Scissors\n" << "P for Paper\n";
	cin >> option;
	
	switch(option)
	{
		case 'R':
			user=3;
			break;
		case 'P':
			user=1;
			break;
		case 'S':
			user=2;
			break;
		default:
			cout << "You selected an invalid option\n";
			break;
	}
	
	if (num==user)
	{
		cout << "It is a tie!\n";
	}
	else
	{
		
		if(user==1&&num==3)
			cout << "You won! Paper beats rock.\n";
		else if(user==2&&num==1)
			cout << "You won! Scissors beats paper.\n";
		else if(user==3&&num==2)
			cout << "You won! Rock beats scissor.\n";
		else
			cout << "You lose. Better luck next time.\n";
	}
	
}


void guessnumber()
{

	int guess[3]={-1, -1, -1};
	int user[3];
	int num, i, same=0, order=0;
	
	srand(time(0));
	
	for(int i=0, x=0;i<3;i++)
	{	
		do
		{
			num = rand()%9;
			
			
		}while(num<0);
		
		guess[i]=num;
		
	}
	
	for(i=0;i<3;i++)
	{	
	
		cout << "guess numbers "<< guess[i] << endl;			
	}
	
	cout << "The program will generate 3 numbers between 0-9." 
	<< "You have to guess them by entering 3 numbers in that range.\n";
		
	for(i=0;i<3;i++)
	{		
		do
		{
			cin >> user[i];
			
			if((user[i]<0)||(user[i]>9))	
				cout << "The number is out of range, enter again.\n";
					
		}while ((user[i]<0)||(user[i]>9));
	}
		
	for (i=0;i<3;i++)
	{
		if(guess[i]==user[i])
		{
			order++;;
		}
		
		for (int j=0;j<3;j++)
		{
			if (guess[i]==user[j])
			{			
				same++;
			}
		}
	}
	
	
	if(same==1)
		cout << "One of the numbers match\n";
	else if(same==2)
		cout << "Two of the numbers match\n";
	else if(same==3 && order!=3)
		cout << "Three numbers match but not in order\n";
	else if(same=3 && order==3)
		cout << "Three numbers match and they are in order\n";
	else if(same==0)
		cout << "None of the numbers match\n";
		
}


























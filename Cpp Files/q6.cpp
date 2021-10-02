#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;

//Prototype declaration
int generator();


int main()
{
	
	int trails=3, num, guess, win=0, over=0;
	string check;
	
	cout << "In this game you'll have to guess a number between 1 to 10, which will be generated after each trial\n";
	cout << endl << "Starting Now\n" << endl;
	
	do
	{
		
		trails=3;
		win=0;
		
		for (int i=0; i<3 ; i++)
		{
			
			num = generator();
			
			cout << "Guess the Number!\n";
			cin >> guess;
			
			trails--;
			
			if(guess==num)
			{
				cout << "You have correctly guessed the number!\n";
				win++;
			}
			else
				cout << "You have not guessed the correct number\n";
				
			cout << "The number of trails remaining are " << trails << endl << endl;
			
			if(win>=2)
			{	
				break;
			}
			
		}
		
		if(win>=2)	
			cout << "You won by " << win << "-" << (3-win) << endl;
		else
			cout << "You lost by " << win << "-" << (3-win) << endl;
		cout << "Do you want to play the game again?\n"
		<< "Type 'yes' if you do and 'no' if you dont\n";
		cin >> check;
		
		if (check=="yes")
			over=1;
		
	}while (over!=0);
		
	return 0;
}

int generator()
{
	int num;
	do
	{
	srand(time(NULL));
	num = rand()%10;
	}while(num==0);
	
	return num;
	
}

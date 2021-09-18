/* Muhammad Munaf Ul Hassan
i200891 */

#include <iostream>


using namespace std;

//Prototype declaration
int ticketchecker(int, int);
int sellmore();
int morebus();


int main()
{
	int nooftickets=0, sell, total=60, revenue=0;
	
	cout << "Welcome to Snow Travellers\n" << endl;
	do
	{
		cout << "Price of each ticket is Rs 1999\n"
		<< "For groups of 3, you will get a 10% discount\n" << endl;
		
		cout << "Enter the number of tickets you want to buy\n";
		cin >> nooftickets;
		if(nooftickets>total)
		{
			cout << "The number of tickets you entered are not avaliable\n"
			<< "Only " << total << " tickets are left\n";
			continue;
		}
		
		
		revenue += ticketchecker(nooftickets, total);
		
		total-=nooftickets;
		
		sell=sellmore(); //sell=0 if no more sales
		cout << "sell=" << sell << endl;
		
		if(total==0)
		{
			int bus;
			bus=morebus();
			if(bus)
				total+=30;
			else
				sell=0;
		
		}
				
	}while(sell!=0);
	
	//showing report
	cout << endl << endl;
	cout << "*Report for the sales*\n";
	cout << "Total revenue generated is Rs " << revenue << endl;
	cout << "The remaning tickets are " << total << endl;
	
	return 0;
}


int ticketchecker(int n, int total)
{
	
	int cost=0;
	
	//double discount=1;
	
	cout << "total=" << total << endl;
	
	/*
	if(1)
	{
		if(n>=3)
		{
			
			cost = static_cast<int>(n)*1999*0.9;
		}
		else
			cost = static_cast<int>(n)*1999;
	}
	*/
	
	

	
	if(n>(total-3))
	{
		if(n>=3)
		{
			cost+= (n-(total-3))*1999*0.5;
			cost+= (n-(n-(total-3)))*1999*0.9;
		}
		else
			cost+= (n-(total-3))*1999*0.5;
			cost+=  (n-(n-(total-3)))*1999;
	}
	else
	{
		if(n>=3)
		{
			cost+=  n*1999*0.9;
		}
		else
			cost+=  n*1999;
	}
		
	total = total - n;
	
	cout << "cost = " << cost << endl;
	
	return cost;
		
}

int sellmore()
{
	char ch;
	int x;
	
	cout << "Does the owner want to keep selling more tickets? (Y or N)\n";
	cin >> ch;
	
	if(ch=='Y')
		return 1;
	else
		return 0;
		
	
		
}

int morebus()
{
	char ch;
	int more=0;
	cout << "The tickets are finished\n";
	cout << "Does owner want to increase number of buses?(Y or N)\n";
	cin >> ch;
	
	if(ch=='Y')
	{
		cout << "The reserved bus will also be used for the trip now.\n";
		// considering that that the reserved bus is the 'only' one that can be used if more 		   people are present to go for the trip
		return 1;
	}
	else
		return 0;
		
}
















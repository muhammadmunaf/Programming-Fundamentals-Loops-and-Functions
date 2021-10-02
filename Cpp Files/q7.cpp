#include <iostream>


using namespace std;

//Prototype declaration
int ordercheck(int, int);
void showmenu();

int main()
{
	int balance=0, cost=0, order, total=0;
	char ch;
	
	do{
		cout << "Enter you credit card balance to get the menu (must be a positive number)\n";
		cin >> balance;
		
	}while(balance<0);
	
	
	do
	{
		showmenu();
		
		cin >> order;
		
		cost = total + ordercheck(order, cost);
		
		if((cost*1.16)>balance)
		{
			cout << "Sorry the item couldn't be ordered due to insufficent balance\n"
			<< "You can select some other item or end the program\n";
			
		}
		else
		{
			total += (cost -total);
			cout << "Item added\n";
		}
		
		cout << "Total =" << total << endl;
		cout << "Cost =" << cost << endl;
		
	
	}while(order!=6);
	
	cout << "Are you a member of the resturant?(Y or N)\n";
	cin >> ch;
	
	if((ch=='Y')||(ch=='y'))
	{
		total = total*0.9;
	}
	
	//GST
	total=total*1.16;
	
	balance=balance-total;
	
	cout << "Total Bill is " << (total+1) << endl;
	cout << "Remaining balance is " << (balance-1) << endl;
	
	return 0;
	
}

int ordercheck(int order, int cost)
{
	cost=0;
	switch(order)
	{
		case 1:
			cost=1500;
			break;
		case 2:
			cost=350;
			break;
		case 3:
			cost=1100;
			break;
		case 4:
			cost=500;
			break;
		case 5:
			cost=30;
			break;
		case 6:
			cout << "Order ended\n";
			break;
		default:
			cout << "You have selected an invalid option\n";
			break;
	}
	
	return cost;
}

void showmenu()
{
	cout << endl;
	cout << endl;
	cout << "Press 1 to buy Pizza\n" 
	<< "Press 2 to buy Rice\n" 
	<< "Press 3 to buy Steak\n" 
	<< "Press 4 to buy Spaghetti\n" 
	<< "Press 5 to buy Tea\n"
	<< "Press 6 to end program and show bill\n";
}








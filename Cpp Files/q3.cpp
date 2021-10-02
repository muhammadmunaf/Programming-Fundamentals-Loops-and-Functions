#include <iostream>
#include <iomanip>

using namespace std;


//Prototypes Declaration
int palindrome(int, int);
int prime(int);
int noofdigits(int);
int sumofdigits(int, int);
int counteven(int, int);
int sumeven(int, int);
int countodd(int, int);
int sumodd(int, int);
int maxdigit(int, int);
int mindigit(int, int);


int main()
{
	int num, check=0, i=10, count=0;
	
	int prime1, digits, sumdigits, sumeven1, sumodd1, max, min, counteven1, countodd1, pal;
	// I've put 1 after variable name in some cases as it matches name of function and gives an error
	
	do
	{
		cout << "Enter a positive integer\n";
		cin >> num;
	}while (num<0);
	
	//checking number of digits
	while (check!=num)
	{
		check=num%i;
		i*=10;
		count++;
	}
	
	
	pal = palindrome(num, count);
 	digits = noofdigits(num);
	prime1 = prime(num);
	sumdigits = sumofdigits(num, count);
	counteven1 = counteven(num, count);
	sumeven1 = sumeven(num, count);
	countodd1 = countodd(num, count);
	sumodd1 = sumodd(num, count);
	max = maxdigit(num, count);
	min = mindigit(num, count);
	
	if(pal == 1)
		cout << "It is a Palindrome Number\n";
	else
		cout << "It is not a Palindrome Number\n";
	
	if(prime1 <=2)
		cout << "It is a prime number\n";
	else
		cout << "It is not a prime number\n";
		
	cout << "No of digits are " << digits << endl;
	
	cout << "Sum of digits is " << sumdigits << endl;
	
	cout << "Number of even numbers are " << counteven1 << endl;
	
	cout << "Sum of even numbers is " << sumeven1 << endl;
	
	cout << "Number of odd numbers are " << countodd1 << endl;
	
	cout << "Sum of odd numbers is " << sumodd1 << endl;
	
	cout << "Digit with max value is " << max << endl;
	
	cout << "Digit with min value is " << min << endl;
	
	
	return 0;

}


int palindrome(int n, int count)
{
			
	int rev_num=0, k=1, answer=0;
	
	for (int i=1;i<count;i++)
		k*=10;
	
	for (int i=0, x=1, y=10; i<count; i++, x*=10, y*=10, k/=10)
	{
				
		rev_num = rev_num + ((n%y)/x)*k;
				
	}
	
	if (rev_num == n)
	{
		answer=1;
	}
	
	return answer;
	
} 


int prime(int n)
{
	int num=1, prime=0;
	
	while (num<=n)
	{
		if(n%num==0)
		{
			prime+=1;
		}
		
		num++;
	}
	
	
	return prime;
}


int noofdigits(int n)
{
	int check=0, i=10, count=0;	
	
	while (check!=n)
	{
		check=n%i;
		i*=10;
		count++; 
	}
	
	return count;
}

int sumofdigits(int n, int count)
{
	int total =0;

	for (int i=0, x=1, y=10; i<count; i++)
	{
				
		total += (n%y)/x;
				
		x*=10;
		y*=10;
	}
		
	
	return total;
}

int counteven(int n, int count)
{
	int even=0;
	
	for (int i=0, x=1, y=10; i<count; i++)
	{
				
		if (((n%y)/x)%2==0)
			even++;
				
		x*=10;
		y*=10;
	}
	
	
	return even;
}

int sumeven(int n, int count)
{
	int sum=0;
	
	for (int i=0, x=1, y=10; i<count; i++)
	{
				
		if (((n%y)/x)%2==0)
			sum+=((n%y)/x);
				
		x*=10;
		y*=10;
	}
	
	
	return sum;
}

int countodd(int n, int count)
{
	int odd=0;
	
	for (int i=0, x=1, y=10; i<count; i++)
	{
				
		if (((n%y)/x)%2!=0)
			odd++;
				
		x*=10;
		y*=10;
	}
	
	return odd;
}

int sumodd(int n, int count)
{
	int sum=0;
	
	for (int i=0, x=1, y=10; i<count; i++)
	{
				
		if (((n%y)/x)%2!=0)
			sum+=((n%y)/x);
				
		x*=10;
		y*=10;
	}
	
	return sum;
}

int maxdigit(int n, int count)
{
	int max=0;
	
	for (int i=0, x=1, y=10; i<count; i++)
	{
				
		if (max<((n%y)/x))
			max=(n%y)/x;
				
		x*=10;
		y*=10;
	}
	
		
	return max;
}

int mindigit(int n, int count)
{
	int min = ((n%10)/1);
	
	for (int i=0, x=1, y=10; i<count; i++)
	{
				
		if (min>((n%y)/x))
			min=(n%y)/x;
				
		x*=10;
		y*=10;
	}
	
		
	return min;
}






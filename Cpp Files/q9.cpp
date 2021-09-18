/* Muhammad Munaf Ul Hassan
i200891 */

#include <iostream>


using namespace std;


int main()
{
	char input;
	int a=0, e=0, i=0, o=0, u=0, total=0;

	cout << "Enter a sentence character by character and when you have finished your sentence press escape button\n";

	do{
		cin >> input;
		
		if((input==65)||(input==97))
			a++;
		else if((input==69)||(input==101))
			e++;
		else if((input==73)||(input==105))
			i++;
		else if((input==79)||(input==111))
			o++;
		else if((input==85)||(input==117))
			u++;
			
	}while(input!=27);
	
	total += a + e + i + o + u;
	
	cout << "Total Number of Vowels: " << total << endl;
	cout << "Total Number of a's: " << a << endl;
	cout << "Total Number of e's: " << e << endl;
	cout << "Total Number of i's: " << i << endl;
	cout << "Total Number of o's: " << o << endl;
	cout << "Total Number of u's: " << u << endl;
	
	return 0;
	
}














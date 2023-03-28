#include <iostream>

using namespace std;


int main()
{
	int n;
	int silnia = 1;
	
	cout << "Factorial counting. Give me a number: " << endl;
	cin >> n ;
	
	if (n == 0 || n == 1)
	{
 	   	 silnia = 1;	
	}
	
	else if (n > 1)
	{
		for(int i = 1; i<=n; i++)
		{		
  				silnia = i * silnia;
		}
	}
	
	cout << "Factorial = " << silnia << endl;
	
	return 0;	
		
}

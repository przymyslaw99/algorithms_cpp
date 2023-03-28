#include <iostream>
using namespace std;

int main()
{
	int dice;
	int sign;
	int number;

	while (true)
	{
		cout << "How many faces does your dice have?" << endl;
		cin >> dice;
		
		if (dice < 4)
		{
		cout << "Not OK. The dice must have at least 4 sides!" << endl;
		}
		else if (dice >= 4)
		{
		cout << "OK. Your dice has: " << dice << " sides." << endl;	
		break;
		}
	}

	while(true)
	{
		cout << "Draw a new number? (1/0)" << endl;
		cin >> sign;
		if (sign == 0 )
		{
			cout << "Game over!" << endl;
			break;
		}

		number = ( rand() % dice ) + 1;
		cout << "The number drawn is: " << number << endl;
	
	}	
}

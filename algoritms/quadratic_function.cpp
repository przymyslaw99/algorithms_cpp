#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	
	float a;
	float b;
	float c;
	float delta;
	float x1;
	float x2;
	
	cout << "Give the coefficients of the quadratic function:" << endl;
	cout << "Coefficient a = ?" << endl;
	cin >> a;
	cout << "Coefficient b = ?" << endl;
	cin >> b;
	cout << "Coefficient c = ?" << endl;
	cin >> c;
	cout << "Your coefficients are: a = " << a << ", b = " << b << ", c = " << c << endl;
	
	if (a == 0)
	{
		cout << "This is not a quadratic function!";
	}
	else
	{
		cout << "This is a quadratic function!" << endl;
		delta = (b*b)-(4*a*c);
		cout << "Discriminant = " << delta << endl;
		if (delta < 0)
		{
		     cout << "There are no roots of functions.";
		}
		else if (delta > 0)
		{
			x1 = (-b - sqrt(delta))/(2*a);
			x2 = (-b + sqrt(delta))/(2*a);
			cout << "Roots are: " << x1 << " and " << x2 << endl;
		}
		else if (delta == 0)
		{
			x1 = -b /(2*a);
			cout << "Root is: " << x1 << endl;
		}
	}
	
	return 0;
}

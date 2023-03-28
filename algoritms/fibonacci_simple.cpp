#include <iostream>

using namespace std;

int main()
{
    int number;
    int a1 = 0;
    int a2 = 1;
    int result = 0;
    
    cout << "Enter the element number of the Fibonacci sequence: " << endl;
    cin >> number;
    
    if (number < 3)
    {
    	result = 1;
    }
    else
    {
    	for (int i=0; i<number; i++)
            {
            a1 = a2;
            a2 = result;
            result = a1 + a2;
            }  
    }

    cout << "The term of the given element of the Fibonacci sequence is: " << result << endl;

return 0;
}

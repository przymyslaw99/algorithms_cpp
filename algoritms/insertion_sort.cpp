#include <iostream>
#include <cstdlib>

using namespace std;

int tab_size = 10;
int array[10];
int elem;
int j;

int main()
{
	
for(int i = 0; i < tab_size; i++)
	{
		array[i] = (rand() % 15) + 1;
	}
	
cout << "Numbers before sorting:" << endl;
for (int i = 0; i < tab_size; i++)
	{
		cout << array[i] << endl;
	}

for (int i = 1; i < tab_size; i++)	
	{
	elem = array[i];
	j = i-1;
	while(j>=0 && array[j]>elem)
		{
			array[j+1] = array[j];
			--j;
		}
	array[j+1] = elem;
	}
	
cout << "Numbers after sorting:" << endl;
for (int i = 0; i < tab_size; i++)
	{
		cout << array[i] << endl;
	}	
}

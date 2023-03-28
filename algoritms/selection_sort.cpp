#include <iostream>
#include <cstdlib>

using namespace std;

int tab_size = 55;
int array[55];
int index_min;
int elem;
int elem_min;

int main()
{
	
for(int i = 0; i < tab_size; i++)
	{
		array[i] = (rand() % 20) + 1;
	}
	
cout << "Numbers before sorting:" << endl;
for (int i = 0; i < tab_size; i++)
	{
		cout << array[i] << endl;
	}
	
for (int i = 0; i < tab_size; i++)
	{
		elem = array[i];
		elem_min = array[i];
		index_min = i;
		for(int j = i + 1; j < tab_size; j++)
		{
			if (array[j] < elem_min)
			{
				elem_min = array[j];
				index_min = j;
			}
		}
		array[index_min] = array[i];
		array[i] = elem_min;
	}

cout << "Numbers after sorting:" << endl;
for (int i = 0; i < tab_size; i++)
	{
		cout << array[i] << endl;
	}	
}


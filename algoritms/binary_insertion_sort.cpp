#include <iostream>
#include <cstdlib>

using namespace std;

int tab_size = 10;
int array[10];
int elem;

int main()
{
	
for(int i = 0; i < tab_size; i++)
	{
		array[i] = (rand() % 50) + 1;
	}
	
cout << "Numbers before sorting:" << endl;
for (int i = 0; i < tab_size; i++)
	{
		cout << array[i] << endl;
	}

for(int i = 1; i < tab_size; i++)
{
	elem = array[i];
	int down = 0;
	int up = i - 1;
	int mid = 0;
	while(down<=up)
	{
		mid = (down+up)/2;
		if (elem < array[mid])
		{
			up = mid-1;
		}
		else
		{
			down = mid+1;
		}
	}

	for(int j = i-1; j >= down; j--) 
	{
		array[j+1] = array[j];
	}
	array[down] = elem;

}

cout << "Numbers after sorting:" << endl;
for (int i = 0; i < tab_size; i++)
	{
		cout << array[i] << endl;
	}

}

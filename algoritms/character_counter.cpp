#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
int n;
ifstream file ("text.txt");
for (int counter=0; file.get()!=EOF; ++counter)
    {
    n++;
    }

cout << "The number of characters in the text is: "<< n << endl;

return 0;
}


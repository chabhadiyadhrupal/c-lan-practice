#include <iostream>
using namespace std;

int main ()
{
	int a;
	int b;
	int c=1;

	for (a = 1 ; a < 5; a++)
	{
		for (b = 0; b < a ; b++)
		{
				cout << c ;	
		}
			c = c + 2;
			
		cout << endl;
	}
	}


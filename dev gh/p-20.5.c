#include <stdio.h>

int main ()
{
	int a;
	int b;
	int c=1;

	for (a = 1 ; a < 5; a++)
	{
		for (b = 0; b < a ; b++)
		{
				printf (" %d ",c);
		}
			c = c + 2;
	printf("\n");
	}
	}


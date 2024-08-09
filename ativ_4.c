#include <stdio.h>
#include <stdlib.h>

int lancaMoeda()
{
	int i, n, x, cara, coroa;
	
	x = 1;
	cara = 0;
	coroa = 0;
	
	srand(time(NULL)); 
	
	printf ("LANCAMENTO DE MOEDA\n===================\n");
	for (i = 0; i < 100; i++)
	{
		n = rand()%2;
		
		if (n == 1)
		{
			cara++;
			printf ("%d - Cara\n", x);
			x++;
		}
		else
			if (n == 0)
			{
				coroa++;
				printf ("%d - Coroa\n", x);
				x++;
			}
	}
	
	printf ("\nRESULTADO\n=========\n");
	printf ("Cara: %d", cara);
	printf ("\nCoroa: %d", coroa);
}

int main()
{	
	lancaMoeda();
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int sorteia()
{  
	int num;
	num = rand()%6;
		
	return num;
}

int main()
{
	int n, tent;
	
	srand (time(NULL));
	n = sorteia();
	printf ("Tenho um numero de 0 a 50.\nVoce pode adivinhar meu numero?\n\n");
	
	do
	{
		printf ("Digite seu palpite: ");
		scanf ("%d", &tent);
		
		if (tent == n)
			printf ("\nExcelente! Voce adivinhou o numero");
		else
		{
			if (tent < n)
				printf ("\nMuito baixo. Tente novamente\n");
			else
				printf ("\nMuito alto. Tente novamente\n");	
		}
	} while (tent != n);
	
	return 0;
}

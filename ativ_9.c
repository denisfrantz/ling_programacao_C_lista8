#include <stdio.h>
#include <stdlib.h>

int anoBissexto(int ano)
{
	if ((ano % 4 == 0)&&(ano % 100 != 0)||(ano % 400 == 0))
		printf ("\nO ano %d e bissexto", ano);
	
	else
		printf ("\nO ano %d nao e bissexto", ano);
	
}

int main()
{
	int ano;
	
	printf ("ANO BISSEXTO\n============\n");
	printf ("Informe um ano: ");
	scanf ("%d", &ano);
	
	anoBissexto(ano);
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int incremento(int num)
{
	int incr;
	
	incr = num + 1;
	
	return incr;
}

int main()
{
	int num, incr;
	
	printf ("Digite um valor: ");
	scanf ("%d", &num);
	
	incr = incremento(num);
	
	printf ("\nValor original: %d", num);
	printf ("\nValor incrementado: %d", incr);
	
	return 0;
}

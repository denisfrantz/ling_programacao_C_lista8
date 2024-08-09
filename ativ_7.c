#include <stdio.h>
#include <stdlib.h>

float convTemp(float tf)
{
	float tc;
	tc = (tf - 32) * 5/9;
	return tc;
}

int main()
{
	float tf, tc;
	
	printf ("CONVERSOR DE TEMPERATURA\n========================\n");
	
	printf ("Graus F: ");
	scanf ("%f", &tf);
	
	tc = convTemp(tf);
	
	printf ("Graus C: %.1f", tc);
	
	return 0;
}

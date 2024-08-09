#include <stdio.h>
#include <stdlib.h>

float calcArea(float base, float altura)
{
	float area;
	area = base * altura;
	return area;
}

int main()
{
	float base, altura, area;
	
	printf ("AREA DO RETANGULO\n=================\n");
	
	printf ("Base: ");
	scanf ("%f", &base);
	printf ("Altura: ");
	scanf ("%f", &altura);
	
	area = calcArea (base, altura);
	
	printf ("\nArea: %.1f", area);
	
	return 0;
}

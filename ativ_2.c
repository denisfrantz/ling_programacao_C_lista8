#include <stdio.h>
#include <stdlib.h>

float menorNum(float num1, float num2)
{
	if (num1 < num2)
		return num1;
		
	else
		return num2;
}

int main()
{
	float num1, num2;
	
	printf ("1o numero: ");
	scanf ("%f", &num1);
	printf ("2o numero: ");
	scanf ("%f", &num2);
	
	printf ("\nO menor numero e %.1f", menorNum(num1, num2));
	
	return 0;
}

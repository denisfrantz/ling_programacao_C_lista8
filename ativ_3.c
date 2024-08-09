#include<stdio.h>
#include <stdlib.h>

int inverteString()
{
	char string[25];
	int i, j;
	
	printf ("STRING\n======\n");
	gets (string); 
	
	printf ("\nSTRING INVERTIDA\n================\n");
	for (i = 0; string[i] != '\0'; i++); 
	for (j = i - 1; j >= 0; j--)
		printf ("%c", string[j]); 
}

int main()
{
	inverteString(); 
		
	return 0;
}


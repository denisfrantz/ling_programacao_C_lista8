#include <stdio.h>
#include <stdlib.h>

void inverte(int *x, int *y){
	int aux;
	
	aux = *x;
	*x = *y;
	*y = aux;
	
	printf ("\n\nValores invertidos (com funcao):\n");
	printf ("X: %d", *x);
	printf ("\nY: %d", *y);
}

int main(){
	int x, y;
	
	printf ("X: ");
	scanf ("%d", &x);
	printf ("X: ");
	scanf ("%d", &y);
	
	printf ("\nValores invertidos:\n");
	printf ("X: %d", y);
	printf ("\nY: %d", x);
	
	inverte(&x, &y);
	
	return 0;
}

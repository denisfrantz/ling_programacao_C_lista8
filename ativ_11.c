#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int verifIgual(int *pa, int*pb)
{
	int i, j, ac[5], c, d, stop;
	
	for (i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			stop = 0;
			
			for (d = 0; d < c;d ++)
			{
				if (pa[i] == ac[d])
					stop=1;
			}
			
			if ((pa[i] == pb[j])&&(stop==0))
			{
				ac[c] = pa[i];
				c++;	
			}
		}
	}

	printf ("\nElementos do primeiro array presentes no segundo:");
	for (i = 0; i < c; i++)
		printf (" %d |",ac[i]);
}

int main()
{
	int A[5], B[5], i, j;
	
	printf ("ARRAY 1\n=======\n");
	for (i = 0; i < 5; i++)
		scanf ("%d", &A[i]);
		
	printf ("\nARRAY 2\n=======\n");
	for (j = 0; j < 5; j++)
		scanf ("%d", &B[j]);
	
	verifIgual(A,B);
	
	return 0;
}

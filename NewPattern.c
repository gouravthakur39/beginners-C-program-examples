#include <stdio.h>
#include <math.h>
int main()
{
	int n, i, j, k,l;
		
    printf("Enter a number:  \n");
	 scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
		for(j=1; j<=n-i+1; j++)
            printf("%d ", j);

        for(k=1; k<=2*(i-1) && i!=1; k++)
            printf("* ");
              
        for(l=n-i+1; l>=1; l--)
            printf("%d ", l );
              
		printf("\n");
            
    }
}

/*Pattern:

Enter a number:
5
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1

*/
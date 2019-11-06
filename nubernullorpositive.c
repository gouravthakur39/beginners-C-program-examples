#include <stdio.h>

int main () {
int i,n;
float total=1;

scanf("%i", &n);

for (i=1 ; i<=n ; i++){
	if (i%2 == 0){
		total /= 1/ (float) i;
	//	printf("par \n");
		}
	else if ( i%2 == 1){
		total*= 1/(float) i;
	//	printf("impar \n");
		}
    
	}

printf ("%f \n",total);

return 0;
}

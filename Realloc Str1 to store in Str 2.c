#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *p,*q;
    int i;
    p=malloc(5*sizeof(char));
    printf("Enter the String 1 : ");
    scanf("%s",p);
    printf("The String 1 is : ");
    printf("%s",p);
    q=malloc(5*sizeof(char));
    printf("\nEnter the String 2 : ");
    scanf("%s",q);
    printf("The String 2 is : ");
    printf("%s",q);
    printf("\nThe String 1 is Re Allocated to store both String 1 & String 2.");
    p=realloc(p,10*sizeof(char));
    printf("\nEnter the String : ");
    scanf("%s",p);
    printf("The String is : ");
    printf("%s",p);
    return 0;
}

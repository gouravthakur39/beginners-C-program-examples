#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
    int n,len,i,j;
    char* temp;
    temp=(char*)malloc(len*sizeof(char));
    printf("Enter the number of Elements in the Array : ");
    scanf("%d",&n);
    printf("Enter the maximum length of the string in the Array : ");
    scanf("%d",&len);
    char **a;
    a=(char**)malloc(n*sizeof(char*));
    for(i=0;i<n;i++)
    {
        a[i]=(char*)malloc(len*sizeof(char));
    }
    printf("Enter the Elements in the Array :\n");
    gets(a[0]);
    for(i=0;i<n;i++)
    {
        printf("Enter the element %d : ",i+1);
        gets(a[i]);
    }
    printf("The Elements are : ");
    for(i=0;i<n;i++)
    {
        printf("%s ",a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(strcmp(a[j],a[j+1])>0)
            {
                strcpy(temp,a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],temp);
            }
        }
    }
    printf("\nThe Elements after sorting : ");
    for(i=0;i<n;i++)
    {
        printf("%s ",a[i]);
    }
    free(a);
    free(temp);
}

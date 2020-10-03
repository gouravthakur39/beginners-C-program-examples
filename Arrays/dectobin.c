#include<stdio.h>
main()
{
    int dec,bin[10],i,j;
    printf("Enter the decimal value:\n");
    scanf("%d",&dec);

    for(i=0;i<10;i++)
    {
        bin[i]=dec%2;
        dec=dec/2;
    }
    for(i=10;i>=0;i--)
    {
        printf("%d",bin[i]);
    }
}

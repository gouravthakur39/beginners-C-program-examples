#include<stdio.h>
main()
{
    char x[20],ch;
    int i,j=0;
    printf("Enter the string:\n");
    scanf("%s",&x);
    printf("Enter the Character you want to count:\n");
    ch=getche();

    for(i=0;x[i]!=0;i++)
    {
        if(x[i]==ch)
        j++;
    }
    printf("\nThe number of times %c is repeated is %d.\n",ch,j);
}

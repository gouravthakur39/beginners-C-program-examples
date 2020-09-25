#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
    char *a,*b;
    int i=0,j,k=0,c=0,ptr=0,f=0;
    a=(char*)malloc(50*sizeof(char));
    b=(char*)malloc(50*sizeof(char));
    printf("Enter the String : ");
    fgets(a,50,stdin);
    strlwr(a);
    while(a[i]!='\0')
    {
        c=0;
        f=0;
        if(a[i]>='a' && a[i]<='z')
        {
            for(j=0;j<ptr;j++)
            {
                if(b[j]==a[i])
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
            {
                b[ptr++]=a[i];
                for(k=i;a[k]!='\0';k++)
                {
                    if(a[k]==a[i])
                    {
                        c+=1;
                    }
                }
                printf("The character %c is found %d times in the string.\n",a[i],c);
            }
        }
        i++;
    }
    free(a);
    free(b);
}

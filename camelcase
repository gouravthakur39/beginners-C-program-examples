#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
int main()
{
    char s[100],fs[100];
    gets(s);
    /*int l=strlen(s);
    char fins[l-1];
    int i=0;
    while(s[i]!='_')
    {
                    k++;
                    fins[i]=s[i];
                    i++;
    }
    fins[i]=toupper(s[k+1]);
    for(z=i+1;z<l;z++)
    {
             fins[z]=s[z+1];
    }
    puts(fins);
    getch();*/
int k=0,i;
for(i=0;i<strlen(s);i++)
{
    if(int(s[i])>65&&int(s[i]<90))
    {
        fs[k++]='_';
        fs[k++]=tolower(s[i]);
    }
    else
    {
        fs[k++]=s[i];
    }
}
puts(fs);
    return 0;
}


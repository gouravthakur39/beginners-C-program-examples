#include <stdio.h>
#include <math.h>
#include <string.h>
void decimal_hex(int n, char hex[]);
int hex_decimal(char hex[]);
int main()
{
    char hex[20];
    int n,c;
    printf("**----Program to Convert Decimal and Hexadeciaml Vice Versa----***\n\n");
    printf("Choose Your Choice: \n");
    printf("1.Decimal to Hexadecimal:\n");
    printf("2.Hexadecimal to Decimal:\n\n");
    scanf("%d",&c);
    if (c==1)
    {
        printf("Enter decimal number: ");
        scanf("%d",&n);
        decimal_hex(n,hex);
        printf("Hexadecimal number: %s",hex);
    }
    if (c==2)
    {
        printf("Enter hexadecimal number: ");
        scanf("%s",hex);
        printf("Decimal number: %d",hex_decimal(hex));
    }
    return 0;
}

void decimal_hex(int n, char hex[]) 
{
    int i=0,rem;
    while (n!=0)
    {
        rem=n%16;
        switch(rem)
        {
            case 10:
              hex[i]='A';
              break;
            case 11:
              hex[i]='B';
              break;
            case 12:
              hex[i]='C';
              break;
            case 13:
              hex[i]='D';
              break;
            case 14:
              hex[i]='E';
              break;
            case 15:
              hex[i]='F';
              break;
            default:
              hex[i]=rem+'0';
              break;
        }
        ++i;
        n/=16;
    }
    hex[i]='\0';
    strrev(hex);  
}

int hex_decimal(char hex[])  
{
    int i, length, sum=0;
    for(length=0; hex[length]!='\0'; ++length);
    for(i=0; hex[i]!='\0'; ++i, --length)
    {
        if(hex[i]>='0' && hex[i]<='9')
            sum+=(hex[i]-'0')*pow(16,length-1);
        if(hex[i]>='A' && hex[i]<='F')
            sum+=(hex[i]-55)*pow(16,length-1);  
        if(hex[i]>='a' && hex[i]<='f')
            sum+=(hex[i]-87)*pow(16,length-1);
    }
    return sum;
}


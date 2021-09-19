#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void decimal_hex(int n, char hex[]);
int hex_decimal(char hex[]);
char *str_rev(char *str);

int main(void)
{
    /*char str[100]="6458897";
       char *ts=str;
       printf("%s\n",ts);
       ts=str_rev(ts);
       printf("%s\n",ts); */

    char hex[20];
    int n, c;
    printf("***----Program to Convert Decimal and Hexadeciaml Vice Versa----***\n\n");
    printf("Choose Your Choice: \n");
    printf("1.Decimal to Hexadecimal:\n");
    printf("2.Hexadecimal to Decimal:\n\n");
    scanf("%d", &c);
    if(c == 1)
    {
        printf("Enter decimal number: ");
        scanf("%d", &n);
        decimal_hex(n, hex);
        printf("Hexadecimal number: %s", hex);
    }
    if(c == 2)
    {
        printf("Enter hexadecimal number: ");
        scanf("%s", hex);
        printf("Decimal number: %d", hex_decimal(hex));
    }
    printf("\n");
    return 0;
}

void decimal_hex(int n, char hex[])
{
    int i = 0, rem;
    while(n != 0)
    {
        rem = n % 16;
        switch(rem)
        {
        case 10:
            hex[i] = 'A';
            break;
        case 11:
            hex[i] = 'B';
            break;
        case 12:
            hex[i] = 'C';
            break;
        case 13:
            hex[i] = 'D';
            break;
        case 14:
            hex[i] = 'E';
            break;
        case 15:
            hex[i] = 'F';
            break;
        default:
            hex[i] = rem + '0';
            break;
        }
        ++i;
        n /= 16;
    }
    hex[i] = '\0';
    str_rev(hex);
}

int hex_decimal(char hex[])
{
    int i, length, sum = 0;
    for(length = 0; hex[length] != '\0'; ++length)
        ;
    for(i = 0; hex[i] != '\0'; ++i, --length)
    {
        if(hex[i] >= '0' && hex[i] <= '9')
            sum += (hex[i] - '0') * pow(16, length - 1);
        if(hex[i] >= 'A' && hex[i] <= 'F')
            sum += (hex[i] - 55) * pow(16, length - 1);
        if(hex[i] >= 'a' && hex[i] <= 'f')
            sum += (hex[i] - 87) * pow(16, length - 1);
    }
    return sum;
}

char *str_rev(char *str)
{
    int i;
    const size_t len = strlen(str);
    char *copy_str = calloc(len + 1, sizeof(char));

    printf("len is %zu\n", len);

    for(i = 0; str[i] != '\0'; i++)
    {
        copy_str[i] = str[len - i - 1];
        printf("%c\n", copy_str[i]);
    }

    printf("i is %d\n", i);
    str[len] = '\0';
    copy_str[len] = '\0'; // i len 0
    printf("cs is %s\n", copy_str);
    strcpy(str, copy_str);
    printf("str is %s\n", str);
    free(copy_str);
    return str;
}

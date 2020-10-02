#include<stdio.h>
#include<conio.h>
void main() 
{ 
long int n, rev=0,n1,mod; 
printf("ENTER A NUMBER: "); 
scanf("%ld",&n); 
n1=n; 
while(n>0) 
{ 
      mod = n%10; 
      rev = rev * 10 + mod; 
      n = n / 10; 
} 
if (n1 == rev) 
      printf("ENTERED NUMBER IS A PALINDROME\n"); 
else 
      printf("ENTERED NUMBER NOT A PALINDROME\n"); 

getch();
}
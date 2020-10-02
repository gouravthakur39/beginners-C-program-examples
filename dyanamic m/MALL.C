#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
int n,*p,*ptr;
clrscr();
printf("how many numbers\n");
scanf("%d",&n);
ptr=(int*)malloc(n*sizeof(int));
for(p=ptr;p<ptr+n;p++)
{
scanf("%d",p);
}

printf("displaying the elements\n");
for(p=ptr;p<ptr+n;p++)
{
printf("\naddress=%u  value=%d",p,*p);
}
getch();
}
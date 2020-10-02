#include<stdio.h>
#include<conio.h>

struct item
{
int itemno;
char itemname[10];
int price;
int qty;
};
void main()
{
struct item i1,*p;
clrscr();
p=&i1;
printf("enter itemno,name &qty,price");
scanf("%d%s%d%d",&p->itemno,&p->itemname,&p->qty,&p->price);
printf("displaying the data....\n");
printf("%d\t%s\t%d\t%d",p->itemno,p->itemname,p->qty,p->price);
getch();
}


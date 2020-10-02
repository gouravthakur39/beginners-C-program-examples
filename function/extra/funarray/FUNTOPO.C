/*fun with pointer*/
#include<stdio.h>
#include<conio.h>
//void add(int *,int *);
void main()
{
int a,b,result;
clrscr();
printf("\n enter values of a,b");
scanf("%d%d",&a,&b);
//p=&a;
//q=&b;
(*add)(a,b);  //add(&a,&b);        //add(a,b)
//printf("\n sum=%d",result);
getch();
}
(*add)(int x,int y)
{
int z;
z=x+y;
printf("z=%d",z);
//return(z);
}


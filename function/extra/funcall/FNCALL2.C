/*exchange values */
//call by reference
void exchange(int *p,int *q);
void main()
{
int a,b;
clrscr();
printf("enter two values\n");
scanf("%d%d",&a,&b);
printf("original value before function call\n:");
printf("a=%d b=%d",a,b);
exchange(&a,&b);              //call by ref   int a,*p;
getch();
}
void exchange(int *p,int *q)
{
int t;
t=*p;
*p=*q;
*q=t;
printf("\n in function:");
printf("a=%d b=%d",*p,*q);
}
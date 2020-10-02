/*sum=sum+a*/
void main()
{
clrscr();
sum();
getch();
}
sum()
{
int a=1,sum=0;
while(a<=10)
{
sum=sum+a;
a++;
}
printf("\nsum=%d",sum);
}

/*prime nos*/
void main()
{
int no,c;
clrscr();
printf("enter nos");
scanf("%d",&no);
c=primeno(no);
getch();
}

int primeno(p)
{
int rem,i=1,c=0;
while(i<=p)
{
rem=p%i;
if(rem==0)
{
c++;
}
i++;
}
if(c<=2)
printf("%d is a prime no",p);
else
printf("%d is not a prime no",p);
return(p);
}

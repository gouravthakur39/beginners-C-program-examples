//pro on fun to calculate a raise to b
long power(int ,int);
main()
{
  int a,b;
 long  res;        //long int
 clrscr();
  printf("enter value  for a=");
  scanf("%d",&a);
  printf("enter value  for b=");
  scanf("%d",&b);
   res=power(a,b);
  printf("\n%d raise  to %d is %ld",a,b,res);
  getch();
}
long power(int a,int b)
{
   int i;
  long pw=1;
  for(i=1;i<=b;i++)
  pw=pw*a;
  return(pw);
}
 
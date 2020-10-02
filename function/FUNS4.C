//fun with argu & with return values//
int add(int,int);
main()
{
  int i,j,sum;
  clrscr();
  printf("\n enter nos");
  scanf("%d%d",&i,&j);
  sum=add(i,j);             //c=mul(i,j)
  printf("\n sum=%d",sum);
  getch();
}
int add(int a,int b)
{
  int c;
  c=a+b;
  return(c);
}
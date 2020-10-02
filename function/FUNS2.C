//fun with argu & no return value//
//void add(int,int);
main()
{
  int i,j;
  clrscr();
  printf("enter 2 nos");
  scanf("%d%d",&i,&j);
  add(i,j);                //i & j are actual argument list
  getch();
}
void add(int a,int b)  // a & b are formal argument list
{
  int sum;
  sum=a+b;
  printf("\n sum=%d",sum);
}
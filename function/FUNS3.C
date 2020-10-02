//fun without argu but with return value//
//int mul();
main()
{
  int c;
  clrscr();
  c=mul();
  //printf("mul is=%d",m);
 // c=mul();
  printf("\n multiplication=%d",c);
  getch();
}
int mul()
{
  int a,b,k;
  printf("\n Enter value for a & b");
  scanf("%d%d",&a,&b);
  k=a*b;
  return(k);
}


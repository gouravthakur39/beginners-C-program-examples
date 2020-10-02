main()
{
  int num,n1,n2,n3,sum;
  clrscr();
  printf("enter number");
  scanf("%d",&num);
  n1=num%10;
  num=num/10;
  n2=num%10;
  num=num/10;
  n3=num;
  sum=n1+n2+n3;
  printf("sum=%d",sum);
  getch();
  }

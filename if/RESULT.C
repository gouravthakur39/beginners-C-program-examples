main()
{
  int m1,m2,m3;
  clrscr();
  printf("enter 3 marks:\n");
  scanf("%d%d%d",&m1,&m2,&m3);
  if(m1>=40||m2>=40||m3>=40)
  {
    printf("Result:Pass");
  }
  else
  {
    printf("Result:Fail");
  }
  getch();
}



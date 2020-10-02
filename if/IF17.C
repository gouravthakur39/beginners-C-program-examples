//ladder if-else
main()
{
  int a,b;
  int op;
  a=20,b=50;
  clrscr();
  printf("1.add\n2.sub\n3.mul\n4.div");
  printf("\nenter choice");
  scanf("%d",&op);
  if(op==1)
  {
    printf("\naddition is=%d",a+b);
  }
  else if(op==2)
  {
    printf("\nsubstration is=%d",a-b);
  }
  else if(op==3)
  {
   printf("\nmultiplication is=%d",a*b);
  }
  else if(op==4)
  {
    printf("\ndivision is=%d",a/b);
  }
  else
  {
    printf("\n sorry you are entered wrong choice");
  }
  getch();
}


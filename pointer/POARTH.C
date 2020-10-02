main()
{
  int a,b,*ptr1=&a,*ptr2=&b;
  clrscr();
  printf("\n the value of ptr1 is%d",ptr1);
  ptr1=ptr1+10;
  printf("\n the new value of ptr1 is=%d",ptr1);

  printf("\n the value of ptr2 is%d",ptr2);
  ptr2=ptr2-40;
  printf("\n the new value of ptr2 is =%d",ptr2);

  ptr2=ptr2-ptr1;
  printf("\n the new value of ptr2 is=%d",ptr2);
  getch();
  }

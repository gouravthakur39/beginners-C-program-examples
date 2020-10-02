main()
{
  int a=10,*ptr1;
  clrscr();
  ptr1=&a;

  printf("\n address of a is:%u",ptr1);
  ptr1++;
  printf("\n new address of a is %u",ptr1);
  *ptr1=a;
  //(*ptr1)++;
  ++*ptr1;
  printf("\n ptr new value is:%d",*ptr1);

  getch();
}
main()
{
  int a,*ptr1;
  float b,*ptr2;
  clrscr();
  ptr1=&a;
  printf("add of a=%u",&a);
  printf("\n address of a is:%u",ptr1);
  ptr1++;
  printf("\n new address of a is %u",ptr1);

  ptr2=&b;
  printf("\n\nadd of b=%u",&b);
  printf("\n ptr2 is:%u",ptr2);
  ptr2--;
  printf("\n new ptr2 is %u",ptr2);
  getch();
  }
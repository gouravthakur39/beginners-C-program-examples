main()
{
   int *ptr,*p,n;
   clrscr();
   ptr=(int*)malloc(5*sizeof(int));     //10 bytes allocated
   printf("enter values");
   for(p=ptr;p<ptr+5;p++)
   scanf("%d",p);
   for(p=ptr;p<ptr+5;p++)
   printf("value=%d\t address=%u\n",*p,p);

   ptr=(int*)realloc(ptr,8*sizeof(int));
  printf("\n new block reallocated suceessfully");
  printf("\nnew block contains:\n");
  for(p=ptr;p<ptr+8;p++)
  printf("value=%d\t add =%u\n",*p,p);

  printf("\n enter new values for there allocated blocak");
 //for(p=ptr+5;p<ptr+8;p++)or
  for(p=ptr;p<ptr+8;p++)
  scanf("%d",p);
  printf("new values in the list \n");
  for(p=ptr;p<ptr+8;p++)
  printf("value=%d\tadd=%u\n",*p,p);
  getch();
}

main()
{
    int i=10,*ptr;
   clrscr();
   ptr=&i;
    printf("value of i=%d",i);
    printf("\nadd of i=%u",&i);

     printf("\n\n same but using  pointer");
     printf("\n value of i=%d",*ptr);
    printf("\n\n add of i=%u",ptr);

    printf("\n add of ptr=%u",&ptr);
    getch();
}
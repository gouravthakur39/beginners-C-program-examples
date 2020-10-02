int mul(int a,int b,int c)
{
   return a*b*c;
}
int add(int a,int b,int c)
{
   return a+b+c;
}

main()
{
   int (*ptr)(int,int,int);
   clrscr();
   ptr=mul;
    printf("mul is=%d",ptr(2,3,4));
    ptr=add;
     printf("\nadd is=%d",ptr(5,6,4));
    getch();
}
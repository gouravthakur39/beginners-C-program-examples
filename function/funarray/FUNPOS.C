int sum(int a,int b)
{
   return a+b;
}
 int (*ptr)(int,int);
main()
{

   int result;
   clrscr();
   ptr=sum;   //gets address if sum()

    result=(*ptr) (2,3);
    printf("\nadd is=%d",result);
    getch();
}
main()
{
   int no,mul;
   int i=1;
   clrscr();
   printf("enter any number");
   scanf("%d",&no);
   do
   {
       mul=no*i;    //2*1
       printf("%d * %d=%d\n",no,i,mul);
       i++;
   }
   while(i<=10);
    getch();
}

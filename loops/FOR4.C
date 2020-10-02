//program on multiplication table using 3 varibales//
main()
{
   int n,i,m;
   clrscr();
   printf("enter number");
   scanf("%d",&n);
   m=n;
   for(i=1;i<=10;i++)
   {
      printf("\n%d * %d=%d",n,i,m);   //  mul=no*i;
      m=m+n;
   }
   getch();
}


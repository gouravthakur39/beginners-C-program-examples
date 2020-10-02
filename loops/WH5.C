main()
{
   int i=1,n,fact=1;
   clrscr();
   printf("enter number");
   scanf("%d",&n);
   while(i<=n)        //6<=5
   {
     fact=fact*i;      //fact=24*5
     i++;
   }
   printf("\nFact is=%d",fact);
   getch();
}
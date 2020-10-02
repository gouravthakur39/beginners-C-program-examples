//program on prime number //
main()
{
   int i,rem,no,c=0;
   clrscr();
   printf("\n enter number");
   scanf("%d",&no);
   for(i=1;i<=no;i++)
   {
	rem=no%i;
	if(rem==0)
	{
	   c++;
	}
   }
   if(c<=2)// if(c==1||c==2)
   printf("number is prime");
   else
   printf("number is not prime");
   getch();
}
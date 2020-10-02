main()
{
  int i=1,rem,no,c=0;
  clrscr();
  printf("enter any no");
  scanf("%d",&no);
  do
  {
     rem=no%i;
     if(rem==0)
     {
	c++;
     }
     i++;
   }while(i<=no);
   if(c==1||c==2)
   printf("\n number is prime");
   else
   printf("number is not prime");
   getch();
}
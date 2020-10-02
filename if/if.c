main()
{
   int x;
   clrscr();
   printf("enter a bill");
   scanf("%d",&x);
   if(x>=1&&x<=1000)
   {
     printf("no discount");
   }
   else
   {
     if(x>=1001&&x<=2000)
     {
       printf("discount  allowed 5%",x);
     }
     else
     {
     if(x>=2001&&x<=3000)
     {
       printf("discount allowed 10%",x);
     }
     else
     {
      if(x>=3000)
      {
       printf("discount allowed 20%",x);
      }
     }
     }
     }
     getch();
     }



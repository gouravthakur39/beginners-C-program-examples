main()
{
   int x;
   printf("enter number");
   scanf("%d"&x);
   switch(x%2==0)
   {
     case 1:printf("%d is even",x);
     break;
     case 2:printf("%d is odd",x);
     break;
   }
   getch();
}
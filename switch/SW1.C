main()
{
   int a;
   clrscr();
   printf("enter  nos");
   scanf("%d",&a);
   switch(a%2==0)
   {
     case 1:printf("a is even");
	    break;
     default:printf("a is odd");
   }
   getch();
}

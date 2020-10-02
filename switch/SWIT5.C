main()
{
   int x,y;
   char ch;
   clrscr();
   printf("enter 2 no.s");
   scanf("%d%d",&x,&y);
   printf("\n+.\n-.");
   printf("\nenter choice");
   scanf("\n%c",&ch);

   switch(ch)
   {
      case '+':printf("Add=%d",x+y);
      break;
      case '-':printf("Sub=%d",x-y);
      break;
      default:printf("wrong choice");
      break;
    }
    getch();
}
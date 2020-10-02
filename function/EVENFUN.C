main()
{
   int a,c;
   clrscr();
   printf("enter any number");
   scanf("%d",&a);
   c=even(a);
   printf("%d",c);
   getch();
}
int even(int x)
{
   if(x%2==0)
   return 1;
   else
   return 0;
}

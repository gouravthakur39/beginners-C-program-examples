//finding the square for same no3.//
main()
{
   int a[3],b[3],i;
   clrscr();
   printf("enter 3 nos");
   for(i=0;i<3;i++)
   {
     scanf("%d",&a[i]);
   }
   printf("Result:\n");
   for(i=0;i<3;i++)
   {
     b[i]=a[i]*a[i];
     printf("%d\n",b[i]);
   }
   getch();
   }
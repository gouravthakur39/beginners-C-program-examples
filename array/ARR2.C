main()
{
  int i,a[10],b[10];
  clrscr();
  printf("enter element:\n");
  for(i=0;i<10;i++)
   {
    scanf("%d",&a[i]);
    }
   for(i=0;i<10;i++)
   {
    b[i]=a[i];
   }
   for(i=0;i<10;i++)
   printf("%d\t%d\n",a[i],b[i]);
   getch();
}



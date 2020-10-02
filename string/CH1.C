main()
{
   char n[10];
   int i,l;
   clrscr();
   printf("enter name");
   gets(n);
   l=0
   for(i=0;n[i]!='\0';i++)
   {
     l++;
   }
   printf("%s has %d char",n,l);
   getch();
   }
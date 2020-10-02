main()
{
   int a;
   char ch1;
   float b;
   a=100;
   ch1='z';
   b=40.85;
   clrscr();
   printf("\n value of a is=%d",a);
   printf("\n address of a is=%u",&a);

   printf("\n value of ch1 is=%c",ch1);
   printf("\n address of ch1 is=%u",&ch1);

   printf("\n value of b is=%f",b);
   printf("\n address of b is=%u",&b);
   getch();
   }
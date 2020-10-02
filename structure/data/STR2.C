main()
{
   struct stud
   {
      int roll,m1,m2;
      char name[30];
      float per;
   };
   struct stud s={101,"john",60,50,55.6};
   clrscr();
   printf("\n Add of roll=%u",&s.roll);
   printf("\n Add of name=%u",&s.name);
   printf("\n Add of m1=%u",&s.m1);
   printf("\n Add of m2=%u",&s.m2);
   printf("\n Add of per=%u",&s.per);
   getch();
}
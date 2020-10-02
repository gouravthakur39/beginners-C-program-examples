struct stud
{
   int roll;
   char name[10];
   int m1,m2,m3,m4;
   float per;
   char  grade;
};
main()
{
   struct stud s;
   printf("Roll:");
   scanf("%d",&s.roll);
   printf("\nName:");
   scanf("%s",&s.name);
   printf("\nenter marks :\n");
   scanf("%d%d%d%d",&s.m1,&s.m2,&s.m3,&s.m4);
   s.per=(s.m1+s.m2+s.m3+s.m4)/4.0;
   if(s.m1<40||s.m2<40||s.m3<40||s.m4<40)
   {
     s.grade='F';
   }
   else
   {
     s.grade='P';
   }
   printf("\n percentage=%.2f\n grade=%c",s.per,s.grade);
   getch();
}



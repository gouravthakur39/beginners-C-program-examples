main()
{
   int marks;
   clrscr();
   printf("enter marks for student");
   scanf("%d",&marks);
   if(marks>=40)
   {
     printf("\n Congratulation ! you pass!!");
   }
   else
   {
     printf("\n sorry to say you fail");
   }
   getch();
}
main()
{
   int i=1,m;
   int sum=0;
   float avg;
   clrscr();
   printf("enter 5 subject marks");
   while(i<=5)
   {
     scanf("%d",&m);
     sum=sum+m;
     i++;
   }
   printf("\n\nSum is =%d",sum);
   avg=sum/5;
   printf("\n\nPercentage=%.2f",avg);
   printf("\n\nFinal Result:");
   if(avg>=75&&avg<100)
   {
     printf("\n\ncongratulations you got distincation");
   }
   else if(avg>=60&&avg<75)
   {
    printf("\n\nyou are passed out with first class");
   }
   else if(avg>=45&&avg<60)
   {
    printf("\n\nyou are passed out with second class");
   }
   else if(avg>=35&&avg<45)
   {
      printf("\n\n you are pass");
   }
   else
   {
      printf("\n\n sorry you are fail");
   }
   getch();
}

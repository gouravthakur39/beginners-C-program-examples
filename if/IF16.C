main()
 {
   int marks;
   clrscr();
   printf("enter marks");
   scanf("%d",&marks);
   if(marks>=75&&marks<=100)
    {
      printf("\n you are got distinction");
    }
    else if(marks>=60&&marks<75)
    {
      printf("\nyou got first class");
    }
    else if(marks>=45&&marks<60)
    {
      printf("\n you are got second class");
    }
    else if(marks>=35&&marks<45)
    {
      printf("\n you are pass");
    }
    else if(marks>100)
    {
	printf("\n sorry you enter wrong marks");
     }
    else
    {
       printf("\n fail");
     }
    getch();
}

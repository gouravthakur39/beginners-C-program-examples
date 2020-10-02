main()
{
   int roll,marks;
   char name[10];
   float avg;
   char ch;  //ch='y';
   clrscr();
   do
   {
      printf("\n Enter roll,name & marks");
      scanf("%d%s%d",&roll,&name,&marks);
      avg=marks/5;
      printf("\n Roll=%d\n\nName=%s\n\nMarks=%d\n\nAvgerage=%f",roll,name,marks,avg);
      printf("\n Do you want to continue(y/n).....");
     scanf("\n%c",&ch);
    //  ch=getche();
     }while(ch=='Y'||ch=='y');
   // while(ch=='y'||ch!=ch);
   getch();
   }

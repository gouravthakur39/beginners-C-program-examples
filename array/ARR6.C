main()
{
   int person[10],i;
   int no;
   clrscr();
   printf("enter no of person's to be entered");
   scanf("%d",&no);
   for(i=0;i<no;i++)
   {
      printf("\nEnter age:");
      scanf("%d",&person[i]);
      if(person[i]>=60)
      printf("\n Senior citizen");
      else
      printf("\n not senior citizen");
      }
      getch();
   }

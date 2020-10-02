main()
{
     int num;
     char reply='y';
     clrscr();
      do
      {
	 printf("enter numbers");
	 scanf("%d",&num);
	 if(num>=100)
	 {
	   printf("The no is greater than 100 ,enter another number\n");
	   continue;
	 }
	 printf("square is=%d",num *num);
	 printf("\n do you want to input another number(y/n)?");
	 scanf("\n%c",&reply);
      }while(reply!='n');
      getch();
}

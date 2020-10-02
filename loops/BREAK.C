//progm finds the inverse of a number using break stat
main()
{
     float num;
     char reply;
     clrscr();
      do
      {
	 printf("enter numbers");
	 scanf("%f",&num);
         if(num==0)
         break;
	printf("inverse number is=%f",1/num);
        printf("do you want input another number(y/n)?");
       scanf("\n%c",&reply);
      }while(reply!='n');
      getch();
}

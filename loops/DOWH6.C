main()
{
  int x,y,ch;
  clrscr();
  printf("\nEnter 2 nos");
  scanf("%d%d",&x,&y);
  do
  {
     printf("\n\n1.add \n2.sub\n3.mul\n4.exit\n\nenter choice");
     scanf("%d",&ch);
     switch(ch)
     {
	 case 1:printf("ADD=%d",x+y);
	 break;

	 case 2:printf("SUB=%d",x-y);
	 break;

	 case 3:printf("MUL=%d",x*y);
	 break;

	 case 4:printf("programs end");
	 break;

	 default:printf("wrong choice");
	 break;
       }
     }while(ch!=4);
     getch();
}
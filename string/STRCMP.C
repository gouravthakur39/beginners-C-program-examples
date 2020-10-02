//strcmp fun
main()
{
     char n1[10],n2[10];
     clrscr();
     printf("enter string=");
     gets(n1);
     printf("enter string=");
     gets(n2);
     if(strcmp(n1,n2)==0)
     {
      printf("equal");
     }
     if(strcmp(n1,n2)>0)
     {
	printf("n1>n2");
      }
      if(strcmp(n1,n2)<0)
      {
	 printf("n1<n2");
       }
       getch();
}
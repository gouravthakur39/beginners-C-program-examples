  // nested if-else
 main()
 {
    int a,b,c;
    clrscr();
    printf("enter three no.s");
    scanf("%d%d%d",&a,&b,&c);         //20,15,10
    if(a==b&&b==c)
    {
      printf("\n all numbers are equal");
    }
    else
    {
     if(a>b)         //2>15
     {
	if(a>c)                  //2>10
	{
	  printf("\n no1 max");
	}
	else
	{
	  printf("no.3 is max");
	}
      }
     else
     {
      if(b>c)       //15>10
      {
	 printf("\n no2 is max");
      }
      else
      {
	 printf("\n no3.is max");
      }
      }
      }
      getch();
}
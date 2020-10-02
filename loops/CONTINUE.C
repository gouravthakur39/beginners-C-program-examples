main()
{
  int n,i,count=0,age;
  clrscr();
  printf("enter number of person");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      printf("\n enter age of a person");
      scanf("%d",&age);
      if(age>=60)
      {
	count++;
      }
      else
      continue;
      }
      printf("\n\nsenior citizen=%d",count);
      getch();
}



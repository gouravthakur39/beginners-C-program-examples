main()
{
  int num[5];
  int sum=0,i;
  float avg;
  clrscr();
  printf("enter five marks");
  for(i=0;i<5;i++)
  {
   scanf("%d",&num[i]);
   }
    for(i=0;i<5;i++)
    {
     sum=sum+num[i];
     }
    avg=sum/5;
    printf("\n Total marks=%d",sum);
    printf("\nThe average of numbers is %f",avg);
    getch();
}

main()
{
  int i,sum=0,no;
  clrscr();
  printf("enter no");
  scanf("%d",&no);
  i=1;
  while(i<=no)
  {
     sum=sum+i;
     i++;
//     printf("digits=%d",i);
   }
   printf("sum of digits=%d",sum);
   getch();
}
main()
{
   int num,digits,sum;
   clrscr();
   digits=sum=0;
   printf("enter number=");
   scanf("%d",&num);
   while(num>0)
   {
      sum=sum+num%10;
     num=num/10;
     digits++;
   }
printf("\nnumber of digits=%d\n\nsum=%d",digits,sum);
getch();
}
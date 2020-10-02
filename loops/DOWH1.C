//program to find the sum of digits of number using do-while loop//
main()
{
   int num,digits,sum;
   clrscr();
  digits=sum=0;
   printf("enter any no=");
   scanf("%d",&num);
   do
  {
     sum=sum+num%10;
     num=num/10;
     digits++;
  }
while(num>0);
printf("\nnumber of digits=%d\n\nsum of digits=%d",digits,sum);
getch();
}


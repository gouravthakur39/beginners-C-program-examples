main()
{
   int num,n1,n2,n3,n4;
   clrscr();
   printf("enter no");
   scanf("%d",&num);
   n1=num/10;
   n2=num%10;
   n3=n1%10;
   n4=n1/10;
   num=n2+n3+n4;
   printf("num=%d",num);
   getch();
}



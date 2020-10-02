main()
{
    int no,rem,c=0,i=1;
    clrscr();
    printf("enter no");
    scanf("%d",&no); //4
    while(i<=no)  // 1<=4
    {
	rem=no%i;     //4%2
       if(rem==0)
      {
	  c++;
       }
       i++;
   }
if(c==1||c==2)  // (c>=2)
printf("no is prime");
else
printf("no is not prime");
getch();
}


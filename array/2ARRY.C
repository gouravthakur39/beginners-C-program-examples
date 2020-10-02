main()
{
   int a[2][2],r,c,sum;
   clrscr();
   printf("enter 4 nos");
   for(r=0;r<2;r++)
   {
     for(c=0;c<2;c++)
     scanf("%d",&a[r][c]);
     }
     printf("displaying the sum of row\n");
     for(r=0;r<2;r++)
     {
      sum=0;
      for(c=0;c<2;c++)
      {
	sum=sum+a[r][c];
	printf("\t%d",a[r][c]);
      }

     printf("=%d",sum);
     printf("\n");

    }

      getch();
     }

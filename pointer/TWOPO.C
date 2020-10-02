main()
{
   int arr[3][2];
   int i,j,*ptr;
   clrscr();
   ptr=&arr[0][0];
   printf("\nenter the array");
   for(i=0;i<3;i++)
   {
     for(j=0;j<2;j++)
     {
	scanf("%d",&arr[i][j]);
     }
   }
    for(i=0;i<3;i++)
    {
     for(j=0;j<2;j++)
     {
     printf("\n%d\t\t address of=%u\n",arr[i][j],ptr);
     ptr++;
  }
  }
  getch();
  }
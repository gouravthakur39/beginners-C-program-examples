main()
{
   int arr[3][2];
   int i,j,*ptr;
   clrscr();
   ptr=&arr[0][0];
   for(i=0;i<3;i++)
   {
     for(j=0;j<2;j++)
     {
      printf("\nenter the array[%d][%d]",i,j);
      scanf("%d",&arr[i][j]);
     }
     }
    for(i=0;i<3;i++)
    {
     for(j=0;j<2;j++)
     {
     printf("\n arr[%d][%d]=%d\t\t address of=%u\n",i,j,arr[i][j],ptr);
     ptr++;
  }
  }
  getch();
  }
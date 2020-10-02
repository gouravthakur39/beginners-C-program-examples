main()
{
    int arr[3][3],i,j;
    clrscr();
    printf("enter elements in an array");
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
	scanf("%d",&arr[i][j]);  //&arr[i]
      }
    }
    printf("\n the elements are:\n");
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
	printf("%d\t",arr[i][j]);
      }
      printf("\n");
    }
   getch();
    }

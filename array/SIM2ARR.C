main()
{
    int arr[5][5],i,j,rows,col;
    clrscr();
    printf("enter elements in an array");
    scanf("%d",&rows);  //3
    printf("enter number of columns");
    scanf("%d",&col); //2
    for(i=0;i<rows;i++)
    {
      for(j=0;j<col;j++)
      {

	scanf("%d",&arr[i][j]);  //&arr[i]
      }
    }
    printf("\n the elements are:\n");
    for(i=0;i<rows;i++)
    {
      for(j=0;j<col;j++)
      {
	printf("%d\t",arr[i][j]);
      }
      printf("\n");
    }
   getch();
    }

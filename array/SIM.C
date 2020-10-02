main()
{
   int arr[5];
   int i;
   clrscr();
   printf("enter element in an array");
   for(i=0;i<5;i++)
   {
      scanf("%d",&arr[i]);
    }
    printf("\n elements in an Array");
   for(i=0;i<5;i++)
   {
     printf("%d\t",arr[i]);
    }
   getch();
}
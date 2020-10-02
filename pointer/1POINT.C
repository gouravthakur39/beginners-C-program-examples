main()
{
   int arr[5]={20,10,30,40,50};
   int *ptr,i;
   clrscr();
   ptr=&arr[4];
   for(i=4;i>=0;i--)
   {
      printf("\n value %d\t at address %u",arr[i],ptr);
     ptr--;
   }
   getch();
   }

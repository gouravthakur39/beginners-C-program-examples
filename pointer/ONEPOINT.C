main()
{
   int arr[5]={10,20,30,40,50};
   int *ptr,i;
   clrscr();
   ptr=&arr[0];   //ptr=&i
   for(i=0;i<5;i++)
   {
      printf("\n value %d\t at address %u",arr[i],ptr);
      ptr++;
   }
   getch();
   }

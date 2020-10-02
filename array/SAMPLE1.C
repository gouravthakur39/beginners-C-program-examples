#include<stdio.h>
#include<conio.h>

   void main()
   {
      int arr[4];
      int i;
      clrscr();

      printf("enter elements in an array:");
      for(i=0;i<4;i++)
      scanf("%d",&arr[i]);

      printf("elements in an array are:");
      for(i=0;i<4;i++)
      printf("i=%d %u\n",arr[i],&arr[i]);

      getch();
   }
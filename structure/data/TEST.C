//arrays of struct
#include<stdio.h>
#include<conio.h>

   struct item
   {
      int code;
      int price;
   };

   void main()
   {
     struct item t[3];
     int i,j,temp;
     clrscr();

     for(i=0;i<3;i++)
     {  printf("enter item code,item price:");
	scanf("%d%d",&t[i].code,&t[i].price);
     }
     printf("\ndetails are:\n");
     for(i=0;i<3;i++)
     {  printf("item code=%d\t price=%d\n",t[i].code,t[i].price);}

     for(i=0;i<3;i++)
     {
     for(j=i+1;j<3;j++)
       {
	  if(t[j].price>t[i].price)
	  {
	     temp=t[j].price;
	     t[j].price=t[i].price;
	     t[i].price=temp;
	  }
      }
    }
     printf("\nDescending:\n");
     for(i=0;i<3;i++)
     {  printf("item no=%d\titem price=%d\n",t[i].code,t[i].price);}


     getch();
     }



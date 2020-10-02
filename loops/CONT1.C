#include<math.h>
main()
{
   int  count=0,neg=0;
   int no;
   float root,sqr;
   clrscr();
   while(count<=100)
   {
     printf("enter no");
     scanf("%d",&no);
     if(no==100)
     break;          //exit from the loop//
     count++;
     if(no<0)
     {
	printf("number is negative\n\n");
	neg++;
	continue;           //skip rest of the loop//
     }
     root=sqrt(no);
     printf("number=%d\nSquare root=%f\n\n",no,root);
     //count++;
     }
     printf("no of items done=%d\n",count);
     printf("\n\nnegative item=%d\n",neg);
     printf("end of data\n");

     getch();
     }

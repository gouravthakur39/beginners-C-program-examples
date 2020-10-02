main()
{
     int i=10;
     float j=20.25;
     int *p;
     float *q;
     clrscr();
     p=&i;
     q=&j;
     printf("\n value of p before increment is %u",p);
     printf("\n value of q before increment is %u",q);
     p++;
     q--;
     printf("\n value of p after increment is %u",p);
     printf("\n value of p after increment is %u",p);
     getch();
     }



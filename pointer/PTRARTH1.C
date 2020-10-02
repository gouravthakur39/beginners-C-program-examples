main()
{
    int x=10,y=20,*p,*q,*r;
    clrscr();
    p=&x;
    q=&y;
    *r=*p * *q;     // z=x+y      sum=*ptr1+*ptr2;
    printf("\n mul =%d",*r);
    printf("\naddress of r %u=",&r);
    getch();
    }
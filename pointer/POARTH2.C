main()
{
    int a,b,c;
    int *ptr1,*ptr2,*ptr3;
    clrscr();
    a=5;
    b=6;
    ptr1=&a;
    ptr2=&b;
    ptr3=&c;
    printf("\n value of a is %d and value of b is %d",*ptr1,*ptr2);
    *ptr1=*ptr1 * 10;  //a=a *10
    printf("\n val of a is =%d",*ptr1);

    *ptr1=*ptr1 / *ptr2;     //a=a/b;
    printf("\n value of a is %d",*ptr1);

    *ptr2=*ptr1 + *ptr2;
    printf("\n value of b %d",*ptr2);

    *ptr3=*ptr1 - *ptr2;
    printf("\n value of c %d",*ptr3);

    getch();
}


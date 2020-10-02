main()
{
    int a,b,sub,mul,div,sum;
    int *ptr1,*ptr2;
    clrscr();
    printf("enter 2 nos");
    scanf("%d%d",&a,&b);
    ptr1=&a;
    ptr2=&b;
   sum=*ptr1+*ptr2;             //*r=*p+*q;
    sub=*ptr1-*ptr2;
    mul=*ptr1 * *ptr2;
    div=*ptr1 / *ptr2;
    printf("\n addres of a=%u",ptr1);
    printf("\n addres of b=%u",ptr2);
    printf("\n Addition %d",sum);
    printf("\n sub %d",sub);
    printf("\n mul %d",mul);
    printf("\n div %d",div);
    getch();
    }
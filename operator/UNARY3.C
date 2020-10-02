main()
{
    int a,b,c,d;
    clrscr();
    printf("enter two no.");
    scanf("%d%d",&a,&b);

    c=++a;
    printf("c=%d a=%d\n",c,a);

    a=--a;
    printf("a=%d\n",a);

    d=b++ -a;
    printf("d=%d b=%d a=%d\n",d,b,a);

    d=++b;
    printf("d=%d b=%d\n",d,b);

    getch();
}
main()
{
    int n;
    float p,r,inter;
    clrscr();
    printf("\n enter prinicipal");
    scanf("%f",&p);
    printf("\nenter no.of years");
    scanf("%d",&n);
    printf("\n enter rate of interest");
    scanf("%f",&r);
    inter=p*n*r/100;
    printf("\n the simple interest is=%f",inter);
    getch();
}



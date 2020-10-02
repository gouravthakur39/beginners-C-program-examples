main()
{
    float a=13.5;
    float *b,*c;
    clrscr();
    b=&a;
    c=b;
    printf("\n%u\n%u",&a,b,c);
    printf("\n%f\t%f\t%f\t%f",a,*(&a),*&a,*b,*c);
    getch();
}
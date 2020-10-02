//pointer to pointer
main()
{
    char ch,*ch1;
    int **ptr;
    ch='A';
    ch1=&ch;
    ptr=&ch1;
    clrscr();
    printf("\n char is:%c",ch);
    printf("\n address of ch:%u",ch1);
    printf("\n value of ch is:%c",*ch1);

    printf("\n\n address of ch1=%u",ptr);
    printf("\n val of ptr is=%u",ptr);

    printf("\n\n char is:%c",*ch1);
    printf("\n char is:%c",**ptr);

    printf("\n add of ptr=%u",&ptr);
    getch();
}


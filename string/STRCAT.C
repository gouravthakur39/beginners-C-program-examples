main()
{
    char str1[20];
    char str2[20];


    clrscr();
    printf("\n enter name=");
    gets(str1);

    printf("\n enter surname=");
    gets(str2);
    strcat(str1,str2);
//  printf("\n concatenation of string %s ",str1);
    puts(str1);
    getch();
    }




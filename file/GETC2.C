#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
    FILE *fp;
    char c;
    printf("data input");
    fp=fopen("input.txt","w");    //open file for input data
    while((c=getchar())!=EOF)     //get a char from keyboard
    putc(c,fp);                   //write a char to input
    fclose(fp);       //close file

    printf("\n Data output\n\n");
    fp=fopen("input.txt","r");   //reopen file

    while((c=getc(fp))!=EOF)        //read a char from file

    printf("%c",c);
    fclose(fp);
    getch();
}


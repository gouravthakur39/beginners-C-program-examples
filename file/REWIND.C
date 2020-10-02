#include <stdio.h>

 void main()
 {
    FILE *fp;
    char first;
    clrscr();
    fp = fopen("D:\\test.txt","w+");
    fprintf(fp,"abcdefghijklmnopqrstuvwxyz");
    rewind(fp);
    fscanf(fp,"%c",&first);
    printf("The first character is: %c\n",first);
    fclose(fp);
    getch();
}

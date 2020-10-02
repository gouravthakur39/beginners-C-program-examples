//strcat fun
main()
{
     char str1[10],str2[10];
     clrscr();
     printf(" enter first name=");
     gets(str1);
     printf("\nenter surname=");
     gets(str2);
     strcat(str1,str2);
     printf("\n concatenated string=%s",str1);
     getch();
}
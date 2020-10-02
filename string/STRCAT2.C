//strcat fun
main()
{
   char str1[10],str2[10],str3[10];
   clrscr();
   printf("enter first name");
   gets(str1);
   printf("surname");
   gets(str2);
   strcat(strcat(str1,str2),str3);
   printf("\n full name=%s",str3);
   getch();
}
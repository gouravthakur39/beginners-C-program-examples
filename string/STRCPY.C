//wap to input name in n1 & store it copy in n2  using strcpy fun
main()
{
   char n1[10],n2[10];
   clrscr();
   printf("enter name");
   gets(n1);
   strcpy(n2,n1);
 // printf("n1=%s",n1);
 // printf("\nn2=%s",n2);
   puts(n1);
   puts(n2);
   getch();
}

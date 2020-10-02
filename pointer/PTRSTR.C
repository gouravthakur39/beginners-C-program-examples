main()
{
  char str1[]="pointer";
  char *cp;
  clrscr();
  cp=&str1[0];
  while(*cp!='\0')
  {
    printf("\n char:%c\t address:%u",*cp,cp);
    cp++;
  }
  getch();
  }
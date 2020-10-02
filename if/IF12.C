main()
{
  char ch1;
  clrscr();
  printf("\n enter a char:");
  ch1=getchar();
  if(isalpha(ch1)>0)
    printf("\n you entered an alphabet");
  else
    if(isdigit(ch1)>0)
    printf("\n you entered a digit");
  else
    printf("you entered a char which is not alphanumeric");
    getch();
}
main()
{
    int age;
    clrscr();
    printf("enter age");
    scanf("%d",&age);
    if(age>18)
    {
      printf("you are able for voting");
    }
    else
    {
      printf("you are not able for voting");
    }
    getch();
}
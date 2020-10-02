main()
{
  int age;
  char gen;
  clrscr();
  printf("enter age & gender");
  scanf("\n%c%d",&gen,&age);
  if(gen=='M'||gen=='m')
  {
    if(age>=21)
    {
      printf("hello! mr.you are able for voting");
    }
    else
    {
      printf("sorry you are not able for voting");
    }
  }
  else
  {
    if(gen=='F'||gen=='f')
    {
       if(age>=18)
       {
	printf("hi !miss you are able for voting");
       }
      else
      {
	printf("sorry!miss you are not able for voting");
     }
   }

   else
   {
     printf("invalid input");
   }
   }
   getch();
   }





#include<stdio.h>
main()
{
      int i,count=0;
      char s1[20],ch;
      printf("Enter the string:\n");
      gets(s1);
      printf("Which character do you want to count:\n");
      scanf("%c",&ch);

      for(i=0;s1[i]!=0;i++)
      {
          if(s1[i]==ch)
            count++;
      }
      printf("Repeated Character is %c and count is %d.\n",ch,count);

}

main()
{
   char ch;
   clrscr();
   printf("\n file");
   printf("\n edit");
   printf("\n view");
   printf("\n windows");
   printf("\n help");
   printf("\n\n type the first alphabets of any menu item to select");
   scanf("\n%c",&ch);
   switch(ch)
   {
     case 'F':
      case 'f':
      printf("\n you have selected file option");
      break;

      case 'E':
      case'e':
      printf("\n you have selected edit option");
      break;

      case 'V':
      case'v':
      printf("\n you have selected view option");
      break;

      case 'W':
      case 'w':
      printf("\n you have selected windows option");
      break;

      case 'H':
      case 'h':
      printf("\n you have selected help option");
      break;
      default:printf("\n selected option is not avilble");
    }
    getch();
}





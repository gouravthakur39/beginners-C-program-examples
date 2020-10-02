//prog on nesting fun
float tom(float);
float dick(float);
main()
{
    float km,cm;
    clrscr();
    printf("enter the distance in kilometer");
    scanf("%f",&km);
    cm=tom(km);
    printf("\n the distance in cm %.2f",cm);
    getch();
}
float tom(float i)
{
   float j,k;
   j=i*1000;
 //calculate km to meter
  printf("\n distance in meter=%f",j);
  k=dick(j);
   return(k);
}
float dick(float a)
{
  float b;
  b=a*100;
  return(b);
 //calculate to cm return b)
}


#define PI 3.14
main()
{
  float r,area,para;
  clrscr();
  printf("enter the value of a radius\n");
  scanf("%f",&r);
  area=PI*r*r;
  para=2*PI*r;
  printf("area=%f\nparameter=%f",area,para);
  getch();
}
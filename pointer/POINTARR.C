 //Working with pointer and arrays..........

  void main()

 {  int arr1[2][5]={10,20,30,40,50,60,70,80,90,100};
    int i,j,*ptr;
    clrscr();
    ptr=&arr1[0][0];
    for(i=0;i<2;i++)
    {
       for(j=0;j<5;j++)
     {
      printf("\nelements:%d   address:%u",*ptr,ptr);
      ptr++;
    }
  }
    getch();
  }


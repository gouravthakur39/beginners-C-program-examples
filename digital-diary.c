#include <fstream.h>
#include <time.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct memo
{tm Time;
 char title[50];
 char memo[1500];
};
void login() //login function
{
	 int tries=3;
	 char user[]="user";
	 char pswrd[]="user";
	 char uname[10], pwd[10], ch;  int i; tryagain: i=0;
	 gotoxy(33,12); cout << "Username : " << user << endl;
	 gotoxy(30,13); cout << "Enter password : "; strcpy(pwd,"");
	 do
	 {
		  ch=getch();
		  if(ch==13)
				break;
		  cout << "*";  pwd[i]=ch;  i++;
	 }while(ch!=13);
	 pwd[i]='\0';
	 gotoxy(33,14);
	 if (strcmp(pwd, pswrd)==0)
		 {cout << "Access Granted"; gotoxy(28,15); cout << "Press any key to continue"; goto bye;}
	 else
	  {if (tries==0)
		  {gotoxy(33,14);
			cout << "Access Denied";
			gotoxy(29,17);
			cout << "(You have 0 tries left)" << endl;
			goto end;
		  }
		clrscr();
		gotoxy(29,17); tries--;
		cout << "(You have " << tries << " tries left)" << endl;
		goto tryagain;
		end: exit(0);
	 }
	 bye: getch();
}
void delay()
{
	 long k;
	 for(k=0; k<2850000; k++)
	 { }
}
void borderd() //borders without delay
{
	 int i;
	 for (i=39; i>=0; i--)
	 {
		  gotoxy(i,0);
		  cout << "*";
	 }
	 for (i=1; i<=25; i++)
	 {
		  gotoxy(0,i);
		  cout << "*";
	 }
	 for (i=1; i<=79; i++)
	 {
		  gotoxy(i,25);
		  cout << "*";
	 }
	 for (i=24; i>=1; i--)
	 {
		  gotoxy(79,i);
		  cout << "*";
	 }
	 for (i=78; i>=40; i--)
	 {
		  gotoxy(i,0);
		  cout << "*";
	 }
}
void intro() //displays stars and the name of the project
	{clrscr();
	 int i;
	 for (i=39; i>=0; i--)
	 {
		  gotoxy(i,0);
		  cout << "*";
		  delay();
	 }
	 for (i=1; i<=25; i++)
	 {
		  gotoxy(0,i);
		  cout << "*";
		  delay();
	 }
	 for (i=1; i<=79; i++)
	 {
		  gotoxy(i,25);
		  cout << "*";
		  delay();
	 }
	 for (i=24; i>=1; i--)
	 {
		  gotoxy(79,i);
		  cout << "*";
		  delay();
	 }
	 for (i=78; i>=40; i--)
	 {
		  gotoxy(i,0);
		  cout << "*";
		  delay();
	 }
 gotoxy(17,4); cout << "#     #  ####  #     ####  #####  ##   ##  #### \n";delay();
 gotoxy(17,5); cout << "#     #  #     #     #     #   #  # # # #  #    \n";delay();
 gotoxy(17,6); cout << "#  #  #  ###   #     #     #   #  #  #  #  ###  \n";delay();
 gotoxy(17,7); cout << "# # # #  #     #     #     #   #  #     #  #    \n";delay();
 gotoxy(17,8); cout << "##  ###  ####  ####  ####  #####  #     #  ####" ; delay();
 gotoxy(34,10); cout << "#####  #####";delay();
 gotoxy(34,11); cout << "  #    #   #";delay();
 gotoxy(34,12); cout << "  #    #   #";delay();
 gotoxy(34,13); cout << "  #    #   #";delay();
 gotoxy(34,14); cout << "  #    #####";delay();
 gotoxy(9,16); cout << "###   #  ####  # #####  ####  #       ###   #  ####  #####  #   #";delay();
 gotoxy(9,17);cout << "#  #  #  #     #   #    #  #  #       #  #  #  #  #  #   #   # #";delay();
 gotoxy(9,18);cout << "#  #  #  # ##  #   #    ####  #       #  #  #  ####  ####     # ";delay();
 gotoxy(9,19);cout << "#  #  #  #  #  #   #    #  #  #       #  #  #  #  #  #  #     # ";delay();
 gotoxy(9,20);cout << "###   #  ####  #   #    #  #  ####    ###   #  #  #  #   #    # ";delay();
 gotoxy(25,22); cout << "Press any key to continue : "; getch();
}
void mainmenu(int &opt) //displays the main menu
	 {clrscr(); borderd();
	  for(int i=28;i<=51; i++) {gotoxy(i,5); cout << "_";}
	  for(i=6; i<=18; i++) {gotoxy(27,i); cout << "|";}
	  for(i=6; i<=18; i++) {gotoxy(52,i); cout << "|";}
	  for(i=28;i<=51; i++) {gotoxy(i,18); cout << "_";}
	  gotoxy(36,6); cout << "*M E N U*";
	  gotoxy(34,7); cout << "DIGITAL DIARY";
	  gotoxy(29,9); cout << "[1] Converter";
	  gotoxy(29,10); cout << "[2] Memo";
	  gotoxy(29,11); cout << "[3] Calculator";
	  gotoxy(29,12); cout << "[4] Contacts";
	  gotoxy(29,13); cout << "[5] Fun and Games";
	  gotoxy(29,14); cout << "[6] Exit";
	  gotoxy(31,16); cout << "Enter option : "; cin >> opt;
	 }
void convertermenu(int &opt) //displays converter menu
{for(int i=28;i<=51; i++) {gotoxy(i,7); cout << "_";}
 for(i=8; i<=19; i++) {gotoxy(27,i); cout << "|";}
 for(i=8; i<=19; i++) {gotoxy(52,i); cout << "|";}
 for(i=28;i<=51; i++) {gotoxy(i,19); cout << "_";}
 gotoxy(36,8); cout << "*M E N U*";
 gotoxy(36,9); cout << "CONVERTER";
 gotoxy(29,11); cout << "[1] Currency";
 gotoxy(29,12); cout << "[2] Length";
 gotoxy(29,13); cout << "[3] Mass";
 gotoxy(29,14); cout << "[4] Speed";
 gotoxy(29,15); cout << "[5] Temperature";
 gotoxy(29,16); cout << "[6] Go Back";
 gotoxy(31,18); cout << "Enter option : "; cin >> opt;
}
void currencymenu(int &opt) //displays menu for currency conversion
{for(int i=28;i<=51; i++) {gotoxy(i,5); cout << "_";}
 for(i=6; i<=19; i++) {gotoxy(27,i); cout << "|";}
 for(i=6; i<=19; i++) {gotoxy(52,i); cout << "|";}
 for(i=28;i<=51; i++) {gotoxy(i,19); cout << "_";}
 gotoxy(36,6); cout << "*M E N U*";
 gotoxy(36,7); cout << "CURRENCY";
 gotoxy(29,9); cout << "[1] BHD to INR";
 gotoxy(29,10); cout << "[2] INR to BHD";
 gotoxy(29,11); cout << "[3] BHD to USD";
 gotoxy(29,12); cout << "[4] USD to BHD";
 gotoxy(29,13); cout << "[5] INR to USD";
 gotoxy(29,14); cout << "[6] USD to INR";
 gotoxy(29,15); cout << "[7] Go Back";
 gotoxy(31,17); cout << "Enter option : "; cin >> opt;
}
void currency() //currency converter
{backcurrency: clrscr(); borderd(); char ch; float value; int opt; currencymenu(opt);
			  switch (opt)
			  {case 1 : do{
							clrscr(); borderd(); gotoxy(28,9);
							cout << "Enter BHD ammount : "; cin >> value;  value*=181.526;
							gotoxy(28,11); cout << "INR ammount is : " << value;
							gotoxy(21,13); cout << "Press y to go again or n to go back : ";
							cin >> ch;}
							while(ch=='y'); goto backcurrency;
				case 2 : do{
							clrscr(); borderd(); gotoxy(28,9);
							cout << "Enter INR ammount : "; cin >> value;  value/=181.526;
							gotoxy(28,11); cout << "BHD ammount is : " << value;
							gotoxy(21,13); cout << "Press y to go again or n to go back : ";
							cin >> ch;}
							while(ch=='y'); goto backcurrency;
				case 3 : do{
							clrscr(); borderd(); gotoxy(28,9);
							cout << "Enter BHD ammount : "; cin >> value;  value*=2.6459;
							gotoxy(28,11); cout << "USD ammount is : " << value;
							gotoxy(21,13); cout << "Press y to go again or n to go back : ";
							cin >> ch;}
							while(ch=='y'); goto backcurrency;
				case 4 : do{
							clrscr(); borderd(); gotoxy(28,9);
							cout << "Enter USD ammount : "; cin >> value;  value/=2.6459;
							gotoxy(28,11); cout << "BHD ammount is : " << value;
							gotoxy(21,13); cout << "Press y to go again or n to go back : ";
							cin >> ch;}
							while(ch=='y'); goto backcurrency;
				case 5 : do{
							clrscr(); borderd(); gotoxy(28,9);
							cout << "Enter INR ammount : "; cin >> value;  value/=68.605;
							gotoxy(28,11); cout << "USD ammount is : " << value;
							gotoxy(21,13); cout << "Press y to go again or n to go back : ";
							cin >> ch;}
							while(ch=='y'); goto backcurrency;
				case 6 : do{
							clrscr(); borderd(); gotoxy(28,9);
							cout << "Enter USD ammount : "; cin >> value;  value*=68.605;
							gotoxy(28,11); cout << "INR ammount is : " << value;
							gotoxy(21,13); cout << "Press y to go again or n to go back : ";
							cin >> ch;}
							while(ch=='y'); goto backcurrency;
			  }
}
void lengthmenu(int &opt) //displays menu for length conversion
{for(int i=28;i<=51; i++) {gotoxy(i,5); cout << "_";}
 for(i=6; i<=19; i++) {gotoxy(27,i); cout << "|";}
 for(i=6; i<=19; i++) {gotoxy(52,i); cout << "|";}
 for(i=28;i<=51; i++) {gotoxy(i,19); cout << "_";}
 gotoxy(36,6); cout << "*M E N U*";
 gotoxy(37,7); cout << "LENGTH";
 gotoxy(29,9); cout << "[1] CM to INCH";
 gotoxy(29,10); cout << "[2] INCH to CM";
 gotoxy(29,11); cout << "[3] CM to FEET";
 gotoxy(29,12); cout << "[4] FEET to CM";
 gotoxy(29,13); cout << "[5] INCH to FEET";
 gotoxy(29,14); cout << "[6] FEET to INCH";
 gotoxy(29,15); cout << "[7] Go Back";
 gotoxy(31,17); cout << "Enter option : "; cin >> opt;
}
void length() //length converter
{backlength: clrscr(); borderd(); char ch; float value; int opt; lengthmenu(opt);
			  switch (opt)
			  {case 1 : do{
							clrscr(); borderd(); gotoxy(28,9);
							cout << "Enter ammount in CM : "; cin >> value;  value/=2.54;
							gotoxy(28,11); cout << "Ammount in INCHES is : " << value;
							gotoxy(21,13); cout << "Press y to go again or n to go back : ";
							cin >> ch;}
							while(ch=='y'); goto backlength;
				case 2 : do{
							clrscr(); borderd(); gotoxy(28,9);
							cout << "Enter ammount in INCHES : "; cin >> value;  value*=2.54;
							gotoxy(28,11); cout << "Ammount in CM is : " << value;
							gotoxy(21,13); cout << "Press y to go again or n to go back : ";
							cin >> ch;}
							while(ch=='y'); goto backlength;
				case 3 : do{
							clrscr(); borderd(); gotoxy(28,9);
							cout << "Enter ammount in CM : "; cin >> value;  value/=30.48;
							gotoxy(28,11); cout << "Ammount in FEET is : " << value;
							gotoxy(21,13); cout << "Press y to go again or n to go back : ";
							cin >> ch;}
							while(ch=='y'); goto backlength;
				case 4 : do{
							clrscr(); borderd(); gotoxy(28,9);
							cout << "Enter ammount in FEET : "; cin >> value;  value*=30.48;
							gotoxy(28,11); cout << "Ammount in CM is : " << value;
							gotoxy(21,13); cout << "Press y to go again or n to go back : ";
							cin >> ch;}
							while(ch=='y'); goto backlength;
				case 5 : do{
							clrscr(); borderd(); gotoxy(28,9);
							cout << "Enter ammount in INCHES : "; cin >> value;  value/=12;
							gotoxy(28,11); cout << "Ammount in FEET is : " << value;
							gotoxy(21,13); cout << "Press y to go again or n to go back : ";
							cin >> ch;}
							while(ch=='y'); goto backlength;
				case 6 : do{
							clrscr(); borderd(); gotoxy(28,9);
							cout << "Enter ammount in FEET : "; cin >> value;  value*=12;
							gotoxy(28,11); cout << "Ammount in INCHES is : " << value;
							gotoxy(21,13); cout << "Press y to go again or n to go back : ";
							cin >> ch;}
							while(ch=='y'); goto backlength;
			  }
}
void massmenu(int &opt) //displays menu for mass conversion
{for(int i=28;i<=51; i++) {gotoxy(i,5); cout << "_";}
 for(i=6; i<=19; i++) {gotoxy(27,i); cout << "|";}
 for(i=6; i<=19; i++) {gotoxy(52,i); cout << "|";}
 for(i=28;i<=51; i++) {gotoxy(i,19); cout << "_";}
 gotoxy(36,6); cout << "*M E N U*";
 gotoxy(38,7); cout << "MASS";
 gotoxy(29,9); cout << "[1] KG to POUND";
 gotoxy(29,10); cout << "[2] POUNG to KG";
 gotoxy(29,11); cout << "[3] KG to OUNCES";
 gotoxy(29,12); cout << "[4] OUNCES to KG";
 gotoxy(29,13); cout << "[5] POUNDS to OUNCES";
 gotoxy(29,14); cout << "[6] OUNCES to POUNDS";
 gotoxy(29,15); cout << "[7] Go Back";
 gotoxy(31,17); cout << "Enter option : "; cin >> opt;
}
void mass() //mass converter
{backmass: clrscr(); borderd(); char ch; float value; int opt; massmenu(opt);
			  switch (opt)
			  {case 1 : do{
							clrscr(); borderd(); gotoxy(28,9);
							cout << "Enter ammount in KG : "; cin >> value;  value*=2.204;
							gotoxy(28,11); cout << "Ammount in POUNDS is : " << value;
							gotoxy(21,13); cout << "Press y to go again or n to go back : ";
							cin >> ch;}
							while(ch=='y'); goto backmass;
				case 2 : do{
							clrscr(); borderd(); gotoxy(28,9);
							cout << "Enter ammount in POUNDS : "; cin >> value;  value/=2.204;
							gotoxy(28,11); cout << "Ammount in KG is : " << value;
							gotoxy(21,13); cout << "Press y to go again or n to go back : ";
							cin >> ch;}
							while(ch=='y'); goto backmass;
				case 3 : do{
							clrscr(); borderd(); gotoxy(28,9);
							cout << "Enter ammount in KG : "; cin >> value;  value*=35.273;
							gotoxy(28,11); cout << "Ammount in OUNCES is : " << value;
							gotoxy(21,13); cout << "Press y to go again or n to go back : ";
							cin >> ch;}
							while(ch=='y'); goto backmass;
				case 4 : do{
							clrscr(); borderd(); gotoxy(28,9);
							cout << "Enter ammount in OUNCES : "; cin >> value;  value/=35.273;
							gotoxy(28,11); cout << "Ammount in KG is : " << value;
							gotoxy(21,13); cout << "Press y to go again or n to go back : ";
							cin >> ch;}
							while(ch=='y'); goto backmass;
				case 5 : do{
							clrscr(); borderd(); gotoxy(28,9);
							cout << "Enter ammount in POUNDS : "; cin >> value;  value*=16;
							gotoxy(28,11); cout << "Ammount in OUNCES is : " << value;
							gotoxy(21,13); cout << "Press y to go again or n to go back : ";
							cin >> ch;}
							while(ch=='y'); goto backmass;
				case 6 : do{
							clrscr(); borderd(); gotoxy(28,9);
							cout << "Enter ammount in OUNCES : "; cin >> value;  value/=16;
							gotoxy(28,11); cout << "Ammount in POUNDS is : " << value;
							gotoxy(21,13); cout << "Press y to go again or n to go back : ";
							cin >> ch;}
							while(ch=='y'); goto backmass;
			  }
}
void speedmenu(int &opt) //displays menu for speed conversion
{for(int i=28;i<=51; i++) {gotoxy(i,7); cout << "_";}
 for(i=8; i<=16; i++) {gotoxy(27,i); cout << "|";}
 for(i=8; i<=16; i++) {gotoxy(52,i); cout << "|";}
 for(i=28;i<=51; i++) {gotoxy(i,16); cout << "_";}
 gotoxy(36,8); cout << "*M E N U*";
 gotoxy(36,9); cout << "SPEED";
 gotoxy(29,11); cout << "[1] KM/H to M/S";
 gotoxy(29,12); cout << "[2] M/S  to KM/H";
 gotoxy(29,13); cout << "[3] Go Back";
 gotoxy(31,15); cout << "Enter option : "; cin >> opt;
}
void speed() //speed converter
{backspeed: clrscr(); borderd(); char ch; float value; int opt; speedmenu(opt);
			  switch (opt)
			  {case 1 : do{
							clrscr(); borderd(); gotoxy(28,9);
							cout << "Enter ammount in KM/H : "; cin >> value;  value/=3.6;
							gotoxy(28,11); cout << "Ammount in M/S is : " << value;
							gotoxy(21,13); cout << "Press y to go again or n to go back : ";
							cin >> ch;}
							while(ch=='y'); goto backspeed;
				case 2 : do{
							clrscr(); borderd(); gotoxy(28,9);
							cout << "Enter ammount in M/S : "; cin >> value;  value*=3.6;
							gotoxy(28,11); cout << "Ammount in KM/H is : " << value;
							gotoxy(21,13); cout << "Press y to go again or n to go back : ";
							cin >> ch;}
							while(ch=='y'); goto backspeed;
			  }
}
void tempmenu(int &opt) //displays menu for temperature conversion
{for(int i=28;i<=53; i++) {gotoxy(i,5); cout << "_";}
 for(i=6; i<=19; i++) {gotoxy(27,i); cout << "|";}
 for(i=6; i<=19; i++) {gotoxy(54,i); cout << "|";}
 for(i=28;i<=53; i++) {gotoxy(i,19); cout << "_";}
 gotoxy(36,6); cout << "*M E N U*";
 gotoxy(35,7); cout << "TEMPERATURE";
 gotoxy(29,9); cout << "[1] CELSIUS to FARENHEIT";
 gotoxy(29,10); cout << "[2] FARENHEIT to CELSIUS";
 gotoxy(29,11); cout << "[3] CELSIUS to KELVIN";
 gotoxy(29,12); cout << "[4] KELVIN to CELSIUS";
 gotoxy(29,13); cout << "[5] FARENHEIT to KELVIN";
 gotoxy(29,14); cout << "[6] KELVIN to FARENHEIT";
 gotoxy(29,15); cout << "[7] Go Back";
 gotoxy(31,17); cout << "Enter option : "; cin >> opt;
}
void temp() //temperature converter
{backtemp: clrscr(); borderd(); char ch; float value; int opt; tempmenu(opt);
			  switch (opt)
			  {case 1 : do{
							clrscr(); borderd(); gotoxy(28,9);
							cout << "Enter ammount in CELSIUS : "; cin >> value;  value=(value*9)/5+32;
							gotoxy(28,11); cout << "Ammount in FARENHEIT is : " << value;
							gotoxy(25,13); cout << "Press y to go again or n to go back : ";
							cin >> ch;}
							while(ch=='y'); goto backtemp;
				case 2 : do{
							clrscr(); borderd(); gotoxy(28,9);
							cout << "Enter ammount in FARENHEIT : "; cin >> value;  value=((value-32)*5)/9;
							gotoxy(28,11); cout << "Ammount in CELSIUS is : " << value;
							gotoxy(25,13); cout << "Press y to go again or n to go back : ";
							cin >> ch;}
							while(ch=='y'); goto backtemp;
				case 3 : do{
							clrscr(); borderd(); gotoxy(28,9);
							cout << "Enter ammount in CELSIUS : "; cin >> value;  value+=273.15;
							gotoxy(28,11); cout << "Ammount in KELVIN is : " << value;
							gotoxy(25,13); cout << "Press y to go again or n to go back : ";
							cin >> ch;}
							while(ch=='y'); goto backtemp;
				case 4 : do{
							clrscr(); borderd(); gotoxy(28,9);
							cout << "Enter ammount in KELVIN : "; cin >> value;  value-=273.15;
							gotoxy(28,11); cout << "Ammount in CELSIUS is : " << value;
							gotoxy(25,13); cout << "Press y to go again or n to go back : ";
							cin >> ch;}
							while(ch=='y'); goto backtemp;
				case 5 : do{
							clrscr(); borderd(); gotoxy(28,9);
							cout << "Enter ammount in FARENHEIT : "; cin >> value;  value=((value+459.67)*5)/9;
							gotoxy(28,11); cout << "Ammount in KELVIN is : " << value;
							gotoxy(25,13); cout << "Press y to go again or n to go back : ";
							cin >> ch;}
							while(ch=='y'); goto backtemp;
				case 6 : do{
							clrscr(); borderd(); gotoxy(28,9);
							cout << "Enter ammount in KELVIN : "; cin >> value;  value=value*9/5-459.67;
							gotoxy(26,11); cout << "Ammount in FARENHEIT is : " << value;
							gotoxy(25,13); cout << "Press y to go again or n to go back : ";
							cin >> ch;}
							while(ch=='y'); goto backtemp;
			  }
}
void converter() //converter function
{
 int opt;
 back: clrscr(); borderd();
 convertermenu(opt);
 switch (opt)
 {case 1 : currency(); goto back;
  case 2 : length(); goto back;
  case 3 : mass(); goto back;
  case 4 : speed(); goto back;
  case 5 : temp(); goto back;
  default : return;
 }
}
void newentry() //function to create new memo entry
	 {memo M, M1;
	  ifstream fin("memo.dat",ios::binary);
	  ofstream fout("memo.dat",ios::binary|ios::app);
	  gotoxy(5,2); cout << "Enter details of new entry : \n";
	  gotoxy(26,4); cout << "Title : "; gets(M.title);
	  while(!fin.eof())
		 {fin.read((char*)&M1,sizeof(M1));
		  if(strcmp(M.title,M1.title)==0) //checks if memo with entered title already exists
			  {gotoxy(5,6); cout << "Memo title already exists. Please enter a new title: ";
				gets(M.title);
			  }
		 }
	  gotoxy(20,8); cout << "Now enter your memo : \n\n";
	  gets(M.memo);
	  struct tm *info;
	  time_t T;
	  time(&T);
	  info = localtime(&T);
	  M.Time=*info;
	  fout.write((char*)&M,sizeof(M));
	  fout.close();
	 }
void display(char title[]) //function to display memo entry
	 {memo M;
	  ifstream fin("memo.dat",ios::binary);
	  while(fin.read((char*)&M,sizeof(M)))
			  {if(strcmp(M.title,title)==0)
					{struct tm *info=&M.Time;
					 gotoxy(56,3); cout << asctime(info);
					 gotoxy(35,5); cout << M.title << endl;
					 cout << '\n' << M.memo;
					}
			  }
	  fin.close();
	 }
void memomenu(int &opt) //displays menu for memo program
{for(int i=28;i<=51; i++) {gotoxy(i,7); cout << "_";}
 for(i=8; i<=18; i++) {gotoxy(27,i); cout << "|";}
 for(i=8; i<=18; i++) {gotoxy(52,i); cout << "|";}
 for(i=28;i<=51; i++) {gotoxy(i,18); cout << "_";}
 gotoxy(36,8); cout << "*M E N U*";
 gotoxy(38,9); cout << "MEMO";
 gotoxy(29,12); cout << "[1] Enter new entry";
 gotoxy(29,13); cout << "[2] Display entry";
 gotoxy(29,14); cout << "[3] Go Back";
 gotoxy(31,17); cout << "Enter option : "; cin >> opt;
}
void memo() //memo function
{int opt; char title[50], ch;
 do{clrscr(); borderd();
	 memomenu(opt); clrscr();
	 switch(opt)
			 {case 1: newentry();
						 break;
			  case 2: cout << "Enter title to be searched : ";
						 gets(title);
						 display(title);
						 break;
			  default : return;
			 }
	 gotoxy(20,20); cout << "Do you want to go again ? (y or n) : ";
	 cin >> ch;
	}while(ch=='y');
}
void design() //display calculator design
{int i;
	 for (i=39; i>=0; i--)
	 {
		  gotoxy(i,0);
		  cout << "*";
	 }
	 for (i=1; i<=25; i++)
	 {
		  gotoxy(0,i);
		  cout << "*";
	 }
	 for (i=1; i<=79; i++)
	 {
		  gotoxy(i,25);
		  cout << "*";
	 }
	 for (i=24; i>=1; i--)
	 {
		  gotoxy(79,i);
		  cout << "*";
	 }
	 for (i=78; i>=40; i--)
	 {
		  gotoxy(i,0);
		  cout << "*";
	 }
 for(i=26;i<=54; i++) {gotoxy(i,2); cout << "_";}
 for(i=3; i<=24; i++) {gotoxy(25,i); cout << "|";}
 for(i=3; i<=24; i++) {gotoxy(55,i); cout << "|";}
 for(i=26;i<=54; i++) {gotoxy(i,24); cout << "_";}
 for(i=29;i<=51; i++) {gotoxy(i,4); cout << "_";}
 for(i=29;i<=51; i++) {gotoxy(i,7); cout << "_";}
 for(i=5; i<=7; i++) {gotoxy(28,i); cout << "|";}
 for(i=5; i<=7; i++) {gotoxy(52,i); cout << "|";}
 for(i=28;i<=31; i++) {gotoxy(i,9); cout << "_"; gotoxy(i+7,9); cout <<"_"; gotoxy(i+14,9); cout <<"_"; gotoxy(i+21,9); cout << "_";}
 for(i=28;i<=31; i++) {gotoxy(i,11); cout << "_"; gotoxy(i+7,11); cout <<"_"; gotoxy(i+14,11); cout <<"_"; gotoxy(i+21,11); cout << "_";}
 for(i=10;i<=11; i++) {gotoxy(27,i); cout << "|"; gotoxy(34,i); cout << "|"; gotoxy(41,i); cout << "|"; gotoxy(48,i); cout << "|";}
 for(i=10;i<=11; i++) {gotoxy(32,i); cout << "|"; gotoxy(39,i); cout << "|"; gotoxy(46,i); cout << "|"; gotoxy(53,i); cout << "|";}
 for(i=28;i<=31; i++) {gotoxy(i,13); cout << "_"; gotoxy(i+7,13); cout <<"_"; gotoxy(i+14,13); cout <<"_"; gotoxy(i+21,13); cout << "_";}
 for(i=28;i<=31; i++) {gotoxy(i,15); cout << "_"; gotoxy(i+7,15); cout <<"_"; gotoxy(i+14,15); cout <<"_"; gotoxy(i+21,15); cout << "_";}
 for(i=14;i<=15; i++) {gotoxy(27,i); cout << "|"; gotoxy(34,i); cout << "|"; gotoxy(41,i); cout << "|"; gotoxy(48,i); cout << "|";}
 for(i=14;i<=15; i++) {gotoxy(32,i); cout << "|"; gotoxy(39,i); cout << "|"; gotoxy(46,i); cout << "|"; gotoxy(53,i); cout << "|";}
 for(i=28;i<=31; i++) {gotoxy(i,17); cout << "_"; gotoxy(i+7,17); cout <<"_"; gotoxy(i+14,17); cout <<"_"; gotoxy(i+21,17); cout << "_";}
 for(i=28;i<=31; i++) {gotoxy(i,19); cout << "_"; gotoxy(i+7,19); cout <<"_"; gotoxy(i+14,19); cout <<"_"; gotoxy(i+21,19); cout << "_";}
 for(i=18;i<=19; i++) {gotoxy(27,i); cout << "|"; gotoxy(34,i); cout << "|"; gotoxy(41,i); cout << "|"; gotoxy(48,i); cout << "|";}
 for(i=18;i<=19; i++) {gotoxy(32,i); cout << "|"; gotoxy(39,i); cout << "|"; gotoxy(46,i); cout << "|"; gotoxy(53,i); cout << "|";}
 for(i=28;i<=31; i++) {gotoxy(i,21); cout << "_"; gotoxy(i+7,21); cout <<"_"; gotoxy(i+14,21); cout <<"_"; gotoxy(i+21,21); cout << "_";}
 for(i=28;i<=31; i++) {gotoxy(i,23); cout << "_"; gotoxy(i+7,23); cout <<"_"; gotoxy(i+14,23); cout <<"_"; gotoxy(i+21,23); cout << "_";}
 for(i=22;i<=23; i++) {gotoxy(27,i); cout << "|"; gotoxy(34,i); cout << "|"; gotoxy(41,i); cout << "|"; gotoxy(48,i); cout << "|";}
 for(i=22;i<=23; i++) {gotoxy(32,i); cout << "|"; gotoxy(39,i); cout << "|"; gotoxy(46,i); cout << "|"; gotoxy(53,i); cout << "|";}
 gotoxy(31,3); cout << "C A L C U L A T O R";
 gotoxy(29,10); cout << '+'; gotoxy(36,10); cout << '-'; gotoxy(43,10); cout << '*'; gotoxy(50,10); cout << '/';
 gotoxy(29,14); cout << '1'; gotoxy(36,14); cout << '2'; gotoxy(43,14); cout << '3'; gotoxy(50,14); cout << '%';
 gotoxy(29,18); cout << '4'; gotoxy(36,18); cout << '5'; gotoxy(43,18); cout << '6'; gotoxy(50,18); cout << '0';
 gotoxy(29,22); cout << '7'; gotoxy(36,22); cout << '8'; gotoxy(43,22); cout << '9'; gotoxy(50,22); cout << '=';
 gotoxy(65,12); cout << "To exit";
 gotoxy(61,13); cout << "Enter 123 n 123";
}
void calculator() //calcutor function
{clrscr();
 design();
 float i,total; char opt; gotoxy(30, 6);
 cin >> total;
 do
  {cin >> opt;
	cin >> i;
	switch(opt)
	{case '+':total=total+i;
				 break;
	 case '-':total-=i;
				 break;
	 case '*':total*=i;
				 break;
	 case '/':total/=i;
				 break;
	 case '%':total=int(total)%int(i);
				 break;
	 case 'n':return;
	}
	clrscr(); design(); gotoxy (30,6);
	cout << total << " ";
  }while(1);
}
class contact
	 {long int telno;
	  char name[50];
	  char emailid[100];
	  public:
			void addcontact();
			void displaycontact();
	 };
void contact::addcontact() //function to add contact
	 {clrscr(); borderd();
	  gotoxy(29,12); cout << "Enter contact no : "; cin >> telno;
	  gotoxy(29,14); cout << "Enter contact name : "; gets(name);
	  gotoxy(29,16); cout << "Enter email id : "; gets(emailid);
	  ofstream fout("contacts.dat", ios::binary | ios::app);
	  fout.write((char*)this, sizeof(contact));
	 }
void displaycontactmenu(int &opt) //displays menu for displaying contacts
	 {clrscr(); borderd();
	  for(int i=28;i<=51; i++) {gotoxy(i,8); cout << "_";}
	  for(i=9; i<=17; i++) {gotoxy(27,i); cout << "|";}
	  for(i=9; i<=17; i++) {gotoxy(52,i); cout << "|";}
	  for(i=28;i<=51; i++) {gotoxy(i,17); cout << "_";}
	  gotoxy(36,9); cout << "*M E N U*";
	  gotoxy(37,10); cout << "DISPLAY";
	  gotoxy(29,12); cout << "[1] Search by number";
	  gotoxy(29,13); cout << "[2] Search by name";
	  gotoxy(29,14); cout << "[3] Search by email";
	  gotoxy(31,16); cout << "Enter option : "; cin >> opt;
	 }
void contact::displaycontact() //displays contact
	 {int opt, check=0;
	  displaycontactmenu(opt); clrscr(); borderd();
	  ifstream fin;
	  fin.open("contacts.dat", ios::binary);
	  switch(opt)
			  {case 1 : long int tel;
							clrscr(); borderd(); gotoxy(3,3);
							cout << "Enter number to be searched : "; cin >> tel;
							while(fin.read((char*)this, sizeof(contact)))
								  {
									if(telno==tel)
									  {gotoxy(27,11); cout << "Telephone number is : " << telno;
										gotoxy(27,13); cout << "Name is : " << name;
										gotoxy(27,15); cout << "Email id is : " << emailid;
									  }
								  }
							break;
				case 2 : char nam[50];
							clrscr(); borderd(); gotoxy(3,3);
							cout << "Enter name to be searched : "; gets(nam);
							while(fin.read((char*)this, sizeof(contact)))
								  {
									if(strcmp(nam,name)==0)
									  {gotoxy(27,11); cout << "Telephone number is : " << telno;
										gotoxy(27,13); cout << "Name is : " << name;
										gotoxy(27,15); cout << "Email id is : " << emailid;
										check=1;
									  }
								  }
							break;
				case 3 : char email[50];
							clrscr(); borderd(); gotoxy(3,3);
							cout << "Enter email to be searched : "; gets(email);
							while(fin.read((char*)this, sizeof(contact)))
								  {
									if(strcmp(email,emailid)==0)
									  {gotoxy(27,11); cout << "Telephone number is : " << telno;
										gotoxy(27,13); cout << "Name is : " << name;
										gotoxy(27,15); cout << "Email id is : " << emailid;
										check=1;
									  }
								  }
							break;
			  }
	  gotoxy(28,20); cout << "Press any key to continue : "; getch();
	 }
void contactmenu(int &opt) //displays menu for contacts program
	 {clrscr(); borderd();
	  for(int i=28;i<=51; i++) {gotoxy(i,8); cout << "_";}
	  for(i=9; i<=17; i++) {gotoxy(27,i); cout << "|";}
	  for(i=9; i<=17; i++) {gotoxy(52,i); cout << "|";}
	  for(i=28;i<=51; i++) {gotoxy(i,17); cout << "_";}
	  gotoxy(36,9); cout << "*M E N U*";
	  gotoxy(36,10); cout << "CONTACTS";
	  gotoxy(29,12); cout << "[1] Add Contact";
	  gotoxy(29,13); cout << "[2] Display Contact";
	  gotoxy(29,14); cout << "[3] Go Back";
	  gotoxy(31,16); cout << "Enter option : "; cin >> opt;
	 }
void contacts() //contact program
	 {int opt; contact C;
	  back: clrscr(); borderd(); contactmenu(opt);
	  switch(opt)
			  {case 1 : C.addcontact(); goto back;
				case 2 : C.displaycontact(); goto back;
				default : return;
			  }
	 }
void gamemenu(int &opt) //displays menu for fun and games
	  {for(int i=28;i<=51; i++) {gotoxy(i,7); cout << "_";}
		for(i=8; i<=18; i++) {gotoxy(27,i); cout << "|";}
		for(i=8; i<=18; i++) {gotoxy(52,i); cout << "|";}
		for(i=28;i<=51; i++) {gotoxy(i,18); cout << "_";}
		gotoxy(36,8); cout << "*M E N U*";
		gotoxy(32,9); cout << "FUN AND GAMES";
		gotoxy(29,11); cout << "[1] Learn your Zodiac";
		gotoxy(29,12); cout << "[2] Learn your BMI";
		gotoxy(29,13); cout << "[3] Maze";
		gotoxy(29,14); cout << "[4] Magic 8-Ball";
		gotoxy(29,15); cout << "[5] Go Back";
		gotoxy(31,17); cout << "Enter option : "; cin >> opt;
	  }
void zodDOB(int &dd, int &mm) //displays design for zodiac program
{for(int i=28;i<=51; i++) {gotoxy(i,7); cout << "_";}
 for(i=8; i<=18; i++) {gotoxy(27,i); cout << "|";}
 for(i=8; i<=18; i++) {gotoxy(52,i); cout << "|";}
 for(i=28;i<=51; i++) {gotoxy(i,18); cout << "_";}
 gotoxy(35,9); cout << "Z O D I A C";
 gotoxy(29,11); cout << "ENTER DATE OF BIRTH :";
 gotoxy(35,15); cout << "DD"; gotoxy(43,15); cout << "MM";
 gotoxy(34,17); cout << "*eg: 19/9*";
 gotoxy(35,14); cout << "__"; gotoxy(43,14); cout << "__";
 gotoxy (35,14); cin >> dd; gotoxy(43,14); cin >> mm;
}
void zodiac() //zodiac function
{back: clrscr(); borderd(); int dd, mm, zodiac; char back;
 zodDOB(dd, mm); clrscr(); //takes date of birth
 if (mm==3&&dd>=21 || mm==4&&dd<=19)
	  zodiac=1;
 else if (mm==4&&dd>=20 || mm==5&&dd<=20)
			 zodiac=2;
 else if (mm==5&&dd>=21 || mm==6&&dd<=20)
			 zodiac=3;
 else if (mm==6&&dd>=21 || mm==7&&dd<=22)
			 zodiac=4;
 else if (mm==7&&dd>=23 || mm==8&&dd<=22)
			 zodiac=5;
 else if (mm==8&&dd>=23 || mm==9&&dd<=22)
			 zodiac=6;
 else if (mm==9&&dd>=23 || mm==10&&dd<=22)
			 zodiac=7;
 else if (mm==10&&dd>=23 || mm==11&&dd<=21)
			 zodiac=8;
 else if (mm==11&&dd>=22 || mm==12&&dd<=21)
			 zodiac=9;
 else if (mm==12&&dd>=22 || mm==1&&dd<=19)
			 zodiac=10;
 else if (mm==1&&dd>=20 || mm==2&&dd<=18)
			 zodiac=11;
 else if (mm==2&&dd>=19 || mm==3&&dd<=20)
			 zodiac=12;
 borderd(); gotoxy(37,8); cout << dd << "/" << mm;
 switch (zodiac)
 {case 1 : gotoxy(32,7); cout << "You are an Aries"; gotoxy(3,11);
			  cout << "Aries loves to be number one, so it's no surprise that these audacious rams";
			  gotoxy(3,12); cout << "are the first sign of the zodiac. Bold and ambitious, Aries dives headfirst";
			  gotoxy(17,13); cout << " into even the most challenging situations."; break;
  case 2: gotoxy(32,7); cout << "You are a Taurus"; gotoxy(3,11);
			 cout << "Taurus is an earth sign represented by the bull. Like their celestial spirit";
			 gotoxy(3,12); cout << "animal, Taureans enjoy relaxing in serene, bucolic environments, surrounded";
			 gotoxy(15,13); cout << "by soft sounds, soothing aromas and succulent flavors."; break;
  case 3: gotoxy(32,7); cout << "You are a Gemini"; gotoxy(3,11);
			 cout << "Have you ever been so busy that you wished you could clone yourself just to ";
			 gotoxy(8,12); cout << "get everything done? That's the Gemini experience in a nutshell.";
			 gotoxy(3,13); cout << "Approximately symbolized by the celestial twins, the air sign was interested";
			 gotoxy(14,14); cout << "in so many pursuits that it had to double itself."; break;
  case 4: gotoxy(32,7); cout << "You are a Cancer"; gotoxy(5,11);
			 cout << "Cancer is a cardinal water sign. Represented by the crab, this oceanic ";
			 gotoxy(3,12); cout << "crustacean seamlessly weaves between the sea and shore, representing their";
			 gotoxy(3,13); cout << "ability to exist in both emotional and material realms. Cancers are highly";
			 gotoxy(7,14); cout << "inuitive, and their pjysical abilites manifest in tangible spaces."; break;
  case 5: gotoxy(32,7); cout << "You are a Leo"; gotoxy(3,11);
			 cout << "Roll out the red carpet, because Leo has arrived. Leo is represented by the";
			 gotoxy(5,12); cout << "lion, and these spirited fire signs are the kings and the queens of the";
			 gotoxy(3,13); cout << "celestial jungle. They're delighted to embrace their royal status. Leos love";
			 gotoxy(15,14); cout << "to bask in the spotlight and celebrate themselves."; break;
  case 6: gotoxy(32,7); cout << "You are a Virgo"; gotoxy(3,11);
			 cout << "Virgo is an earth sign historically represented by the goddess of wheat and";
			 gotoxy(3,12); cout << "agriculture, an association that speaks to Virgo's deep-rooted presence in";
			 gotoxy(3,13); cout << "the material world. Virgos are logical, practical, and systematic in their";
			 gotoxy(4,14); cout << "approach to life. This earth sign is a perfectonist at heart and isn't";
			 gotoxy(31,15); cout << "afraid to improve."; break;
  case 7: gotoxy(32,7); cout << "You are a Libra"; gotoxy(3,11);
			 cout << "Libra is an air sign represented by the scales, an association that reflects";
			 gotoxy(3,12); cout << "Libra's fixation on balance and harmony. Libra is obsessed with symmetry and";
			 gotoxy(14,13); cout << "strives to create equilibrium in all areas of life."; break;
  case 8: gotoxy(32,7); cout << "You are a Scorpio"; gotoxy(4,11);
			 cout << "Scorpio is one of the most understood signs of the zodiac. because of its";
			 gotoxy(5,12); cout << "incredible passion and power, Scorpio is often mistaken for a fire sign.";
			 gotoxy(3,13); cout << "In fact, Scorpio is a water sign that derives its strength from the psychic";
			 gotoxy(31,14); cout << "and emotional realm"; break;
  case 9: gotoxy(30,7); cout << "You are a Sagittarius"; gotoxy(3,11);
			 cout << "Represented by the archer, Sagittarius are always on a quest for knowledge.";
			 gotoxy(4,12); cout << "the last fire sign of the zodiac, Sagittarius handles many pursuits like";
			 gotoxy(5,13); cout << "blazing arrows, chasing after geographical, intellectual, and spiritual";
			 gotoxy(35,14); cout <<  "adventures."; break;
  case 10: gotoxy(31,7); cout << "You are a Capricorn"; gotoxy(3,11);
			  cout << "The last earth sign of the zodiac, Capricorn is represented by the sea goat,";
			  gotoxy(7,12); cout << "a mythological creature with the body of a goat and tail of a fish.";
			  gotoxy(5,13); cout << "Accordingly, Capricorns are skilled at navigating both the material and";
			  gotoxy(31,14); cout << "and emotional realms"; break;
  case 11: gotoxy(32,7); cout << "You are an Aquarius"; gotoxy(4,11);
			  cout << "Despite the 'aqua' in its name, Aquarius is actually the last air sign of";
			  gotoxy(3,12); cout << "the zodiac. Aquarius is represented by the water bearer, the mystical healer";
			  gotoxy(3,13); cout << "who bestows water, or life, upon the land, Accordingly, Aquarius is the most";
			  gotoxy(28,14); cout << "humanitarian astrological sign."; break;
  case 12: gotoxy(32,7); cout << "You are a Pisces"; gotoxy(7,11);
			  cout << "Pisces, a water sign, is the last constellation of the zodiac. It's ";
			  gotoxy(4,12); cout << "symbolized by two fish swimming in opposite directions, representing the";
			  gotoxy(3,13); cout << "constant division of Pisces' attention between fantast and reality. As the";
			  gotoxy(4,14); cout << "final sign, Pisces has absorbed every lesson learned by all of the other";
			  gotoxy(37,15); cout << "signs."; break;
 }
 gotoxy(21,18); cout << "Do you want to go again? (y or n) : "; cin >> back;
 if (back == 'y') goto back;
}
void introbmi();
void bmi() //BMI function
 {
  float wt,ht;
  float bmi;
  char ch1,ch;
  introbmi();
 againw:clrscr();
 borderd();
 gotoxy(10,10); cout<<"ENTER YOUR WEIGHT(KG): ";
  cin>>wt;
  if(wt>635)
	{
	gotoxy(10,12);  cout<<"YOU ARE LITERALLY THE HEAVIEST PERSON ON EARTH.";
	gotoxy(10,13);  cout<<"ARE YOU SURE THIS IS CORRECT ?(y/n) : ";
	 cin>>ch;
	 if(ch=='y')
	 {
	  gotoxy(10,15);  cout<<"WELL OKAY THEN";
	  gotoxy(10,16);  getchar();
		}
	 else
	 {
	 gotoxy(10,15);  cout<<"ALRIGHT LETS TRY AGAIN";
	 gotoxy(10,16);  getchar();
	  goto againw;
	  }
	  }
  againh:clrscr();
  borderd();
  gotoxy(10,10);  cout<<"ENTER YOUR HEIGHT(CM): ";
  cin>>ht;
  if(ht>272)
	{
	gotoxy(10,12);  cout<<"YOU ARE LITERALLY THE TALLEST PERSON ON EARTH.";
	gotoxy(10,13);  cout<<"ARE YOU SURE THIS IS CORRECT ?(y/n) : ";
	 cin>>ch;
	 if(ch=='y')
	 {
	 gotoxy(10,15);  cout<<"WELL OKAY THEN";
	 gotoxy(10,16);  getchar();
	  }
	else
	 {
	 gotoxy(10,15);  cout<<"ALRIGHT LETS TRY AGAIN";
	 gotoxy(10,16);  getchar();
	  goto againh;
	  }
	  }

	 clrscr();
	 borderd();
	 bmi=wt/pow((ht/100),2);
  gotoxy(10,6);   cout<<"YOUR BMI IS : "<<bmi;
  gotoxy(10,9);   cout<<"WOULD YOU LIKE TO SEE WHAT YOUR BMI TELLS ";
  gotoxy(10,10);  cout<<"ABOUT YOUR BODY ?(y/n) : " ;
	 cin>>ch;
	 if(ch=='y')
	  {

	if(bmi<14)
	 {
  gotoxy(10,13);  cout<<"IF THIS IS YOUR BMI YOU CAN'T BE ALIVE.";
  gotoxy(10,14);  cout<<"TRY YOUR REAL WEIGHT AND HEIGHT NOW ";
  gotoxy(10,17);  cout<<"PRESS A IF YOU WANT TO TRY AGAIN OR ANY OTHER KEY TO QUIT :  ";
  cin>>ch1;
  if (ch1=='a' || ch1=='A')
	goto againw;
	else goto finish;
	 }
	 else if(bmi>=14 && bmi<=16)
	 {
	 gotoxy(10,13); cout<<"OH MY GOD! YOU ARE SEVERLEY UNDERWEIGHT!!! DO CONSULT A DOCTOR. :o";
	 gotoxy(10,17); cout<<"PRESS A IF YOU WANT TO TRY AGAIN OR ANY OTHER KEY TO QUIT : ";
  cin>>ch1;
  if (ch1=='a' || ch1=='A')
	goto againw;
  else goto finish;
	 }
	 else if(bmi>16 && bmi<18.5)
	 {
	gotoxy(10,13); cout<<"HMMM... YOU ARE UNDERWEIGHT. TRY EATING MORE :)";
	gotoxy(10,17); cout<<"PRESS A IF YOU WANT TO TRY AGAIN OR ANY OTHER KEY TO QUIT : ";
  cin>>ch1;
  if (ch1=='a' || ch1=='A')
	goto againw;
  else goto finish;
	 }
	 else if(bmi==18.5)
	 {
	gotoxy(10,13); cout<<"YOU ARE PERFECTLY HEATHY!! MUST BE REAL HARD TO MAINTAIN IT THAT WAY :o ";
	gotoxy(10,14); cout<<"PRESS A IF YOU WANT TO TRY AGAIN OR ANY OTHER KEY TO QUIT : ";
  cin>>ch1;
  if (ch1=='a' || ch1=='A')
	goto againw;
	else goto finish;
		}
	 else if(bmi>18.5 && bmi<=25)
	 {
	 gotoxy(10,13); cout<<"YOU ARE OVERWEIGHT.MIGHT WANNA CUT DOWN ON THOSE SWEETS :) ";
	 gotoxy(10,17); cout<<"PRESS A IF YOU WANT TO TRY AGAIN OR ANY OTHER KEY TO QUIT : ";
  cin>>ch1;
  if (ch1=='a' || ch1=='A')
	goto againw;
	else goto finish;;
	}
  else if(bmi>25 && bmi<=30)
	 {
	gotoxy(10,13); cout<<"YOU ARE OBESE. BUT NOTHING TO WORRY ABOUT. ";
	gotoxy(10,14); cout<<"HIT THE GYM AND YOU'LL BE FINE :) ";
	gotoxy(10,17); cout<<"PRESS A IF YOU WANT TO TRY AGAIN OR ANY OTHER KEY TO QUIT : ";
  cin>>ch1;
  if (ch1=='a' || ch1=='A')
	goto againw;
  else goto finish;
	 }
	else if(bmi>30 && bmi<=40)
	 {
	gotoxy(10,13); cout<<"OH MY GOD! YOU ARE SEVERLY OBESE. :o";
	gotoxy(10,17);  cout<<"PRESS A IF YOU WANT TO TRY AGAIN OR ANY OTHER KEY TO QUIT : ";
  cin>>ch1;
  if (ch1=='a' || ch1=='A')
	goto againw;
  else goto finish;

		}
	else if(bmi>40 && bmi<=60)
	 {
	gotoxy(10,13); cout<<"YOU ARE DANGEROUSLY OBESE. CONSULT A DOCTOR !! ";
	gotoxy(10,14); cout<<"CHECK IF YOU GAVE THE CORRECT DATA ";
	gotoxy(10,17);  cout<<"PRESS A IF YOU WANT TO TRY AGAIN OR ANY OTHER KEY TO QUIT : ";
  cin>>ch1;
  if (ch1=='a' || ch1=='A')
	goto againw;
	else goto finish;
	  }
	 else if(bmi>60)
	 {
  gotoxy(10,13);  cout<<"IF THIS IS YOUR BMI YOU CAN'T BE ALIVE.";
  gotoxy(10,14);  cout<<"TRY YOUR REAL WEIGHT AND HEIGHT NOW ";
  gotoxy(10,17);  cout<<"PRESS A IF YOU WANT TO TRY AGAIN OR ANY OTHER KEY TO QUIT : ";
  cin>>ch1;
	 if (ch1=='a' || ch1=='A')
	goto againw;
  else goto finish;
	 }
		}
	 else
	{
  gotoxy(10,19);
  cout<<"ALRIGHT COOL. PRESS ANY KEY TO EXIT .";
  ch=getchar();
	 }
  finish:
	}
void introbmi() //displays design for BMI function
  {
	clrscr();
	borderd();

	gotoxy(10,9);  cout<<" BBBBBBBBBB     M           M    IIIIIIIIIII ";
	delay();
	gotoxy(10,10); cout<<" B        B     M M       M M         I      ";
	delay();
	gotoxy(10,11); cout<<" B        B     M   M   M   M         I      ";
	delay();
	gotoxy(10,12); cout<<" BBBBBBBBBB     M     M     M         I      ";
	delay();
	gotoxy(10,13); cout<<" B        B     M           M         I      ";
	delay();
	gotoxy(10,14); cout<<" B        B     M           M         I      ";
	delay();
	gotoxy(10,15); cout<<" BBBBBBBBBB     M           M    IIIIIIIIIII ";
	delay();
	gotoxy(10,18); cout<<"PRESS ANY KEY TO CONTINUE : ";
	getchar();
	 }
void mazedesign() //displays design for maze
{int i;
 for (i=3; i<=18; i++)
	  {gotoxy(6,i); cout << "#";}
 for (i=7; i<=30; i++)
	  {gotoxy(i,18); cout << "#";}
 for (i=7; i<=30; i++)
	  {gotoxy(i,3); cout << "#";}
 for (i=3; i<=18; i++)
	  {gotoxy(30,i); cout << "#";}
 for (i=9; i<=28; i++)
	  {gotoxy(i,3); cout << "#";}
 for (i=4; i<=8; i++)
	  {gotoxy(9,i); cout << "#";}
 for (i=7; i<=21; i++)
	  {gotoxy(i,10); cout << "#";}
 for (i=5; i<=10; i++)
	  {gotoxy(12,i); cout << "#";}
 for (i=12; i<=17; i++)
	  {gotoxy(9,i); cout << "#";}
 for (i=11; i<=16; i++)
	  {gotoxy(12,i); cout << "#";}
 for (i=13; i<=15; i++)
	  {gotoxy(i,5); cout << "#";}
 for (i=4; i<=8; i++)
	  {gotoxy(18,i); cout << "#";}
 for (i=6; i<=8; i++)
	  {gotoxy(15,i); cout << "#";}
 for (i=5; i<=9; i++)
	  {gotoxy(21,i); cout << "#";}
 for (i=22; i<=27; i++)
	  {gotoxy(i,5); cout << "#";}
 for (i=6; i<=8; i++)
	  {gotoxy(27,i); cout << "#";}
 for (i=7; i<=10; i++)
	  {gotoxy(24,i); cout << "#";}
 for (i=24; i<=30; i++)
	  {gotoxy(i,10); cout << "#";}
 for (i=15; i<=27; i++)
	  {gotoxy(i,12); cout << "#";}
 for (i=13; i<=16; i++)
	  {gotoxy(21,i); cout << "#";}
 for (i=21; i<=30; i++)
	  {gotoxy(i,16); cout << "#";}
 for (i=12; i<=14; i++)
	  {gotoxy(27,i); cout << "#";}
 for (i=14; i<=16; i++)
	  {gotoxy(24,i); cout << "#";}
 for (i=14; i<=18; i++)
	  {gotoxy(18,i); cout << "#";}
 for (i=13; i<=16; i++)
	  {gotoxy(15,i); cout << "#";}
 gotoxy(29,17); cout << "X";
 gotoxy(48,5); cout << "C O N T R O L S";
 gotoxy(48,7); cout << "W : Move UP";
 gotoxy(48,8); cout << "A : Move LEFT";
 gotoxy(48,9); cout << "S : Move DOWN";
 gotoxy(48,10); cout << "D : Move RIGHT";
 gotoxy(28,21); cout << "CAN YOU SOLVE THE MAZE?!";
 gotoxy(26,23); cout << "Get the '@' to the X to win!";
}
int check(int x, int y) //used to check if maze pointer can move there
{int t=1, i;
  for (i=3; i<=18; i++)
	  if(x==6 && y==i) t=0;
 for (i=7; i<=30; i++)
	  if(x==i && y==18) t=0;
 for (i=7; i<=30; i++)
	  if(x==i && y==3) t=0;
 for (i=3; i<=18; i++)
	  if(x==30 && y==i) t=0;
 for (i=9; i<=28; i++)
	  if(x==i && y==3) t=0;
 for (i=4; i<=8; i++)
	  if(x==9 && y==i) t=0;
 for (i=7; i<=21; i++)
	  if(x==i && y==10) t=0;
 for (i=5; i<=10; i++)
	  if(x==12 && y==i) t=0;
 for (i=12; i<=17; i++)
	  if(x==9 && y==i) t=0;
 for (i=11; i<=16; i++)
	  if(x==12 && y==i) t=0;
 for (i=13; i<=15; i++)
	  if(x==i && y==5) t=0;
 for (i=4; i<=8; i++)
	  if(x==18 && y==i) t=0;
 for (i=6; i<=8; i++)
	  if(x==15 && y==i) t=0;
 for (i=5; i<=9; i++)
	  if(x==21 && y==i) t=0;
 for (i=22; i<=27; i++)
	  if(x==i && y==5) t=0;
 for (i=6; i<=8; i++)
	  if(x==27 && y==i) t=0;
 for (i=7; i<=10; i++)
	  if(x==24 && y==i) t=0;
 for (i=24; i<=30; i++)
	  if(x==i && y==10) t=0;
 for (i=15; i<=27; i++)
	  if(x==i && y==12) t=0;
 for (i=13; i<=16; i++)
	  if(x==21 && y==i) t=0;
 for (i=21; i<=30; i++)
	  if(x==i && y==16) t=0;
 for (i=12; i<=14; i++)
	  if(x==27 && y==i) t=0;
 for (i=14; i<=16; i++)
	  if(x==24 && y==i) t=0;
 for (i=14; i<=18; i++)
	  if(x==18 && y==i) t=0;
 for (i=13; i<=16; i++)
	  if(x==15 && y==i) t=0;
 return t;
}
void maze() //maze function
{again : clrscr();
 int x=7, y=4, k=0;
 gotoxy(x,y); cout << "@";
 char ch; borderd(); mazedesign();
 do
  {gotoxy(1,1);
	ch=getch();
	if(ch=='w') {y--; if(!check(x,y)) y++;}
	else if (ch=='s') {y++; if(!check(x,y)) y--;}
	else if (ch=='a') {x--; if(!check(x,y)) x++;}
	else if (ch=='d') {x++; if(!check(x,y)) x--;}
	clrscr(); borderd(); mazedesign(); gotoxy(x,y); cout << "@"; k++;
	gotoxy(46,13); cout << "Number of moves : " << k;
  }while(x!=29 || y!=17);
  gotoxy(44,15); cout << "You finished in " << k << " moves";
  gotoxy(36,18); cout << "Do you want to go again ? (y or n) : "; cin >> ch;
  if (ch=='y') goto again;
  return;
}
void _8ball() //magic 8 ball function
{randomize();
 char str[150], c;
 char CH[3][6]={"Yes", "No", "Maybe"};
 do
 {
  clrscr(); borderd();
  gotoxy(30,5); cout << "Enter question : ";
  gotoxy(3,7); gets(str);
  gotoxy(36,10); cout << CH[random(3)] << endl;
  gotoxy(20,15); cout << "Do you want to ask again? (Y or N) : ";
  cin >> c;
 }while(c=='y');
 return;
}
void game() //fun and games function
	 {clrscr(); borderd(); int opt;
	  gamemenu(opt);
	  switch(opt)
			  {case 1: zodiac();
						  break;
				case 2: bmi();
						  break;
				case 3: maze();
						  break;
				case 4: _8ball();
						  break;
				default : return;
			  }
	 }
void project() //project function
{int opt;
 login();
 intro();
 again : mainmenu(opt);
 switch(opt)
		 {case 1:converter();
					 break;
		  case 2:memo();
					 break;
		  case 3:calculator();
					 break;
		  case 4:contacts();
					 break;
		  case 5:game();
					break;
		  default : return;
		 }
 goto again;
}
void main()
{
 project();
}
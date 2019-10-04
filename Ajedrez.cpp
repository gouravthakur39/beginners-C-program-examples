#include <iostream>
#include <stdio.h>
#include<stdlib.h>
using namespace std;
int peon(int y1, int x1){

    int i=0, j=0, x, y;
    int px[99][99];
    x=y1;
    y=x1;
    for (i=0;i<8;i++){
            for (j=0;j<8;j++){
            px[i][j]=0;
            }
    }system("cls");
//px[x-2][y-1]=1;
    if (x<=8){
        px[y][x-1]=1;
        px[y+1][x-1]=1;
        px[y-1][x-1]=2;
    }cout <<"PEON"<<endl;
    for (i=0;i<8;i++){
            for (j=0;j<8;j++){
            cout << px[i][j];
            }cout << "\n";
    }
    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////
int alfil(int y, int x){ ///Bien
int i, j;
cout <<"ALFIL"<<endl;
    int px[99][99];
    for (i=0;i<8;i++){
            for (j=0;j<8;j++){
            px[i][j]=0;
            }
    }
    i=0;
    j=0;
    while (i<8||j<8){
        i++;
        j++;
        px[x+i-1][y+j-1]=1;
    }while (i>0||j>0){
        i--;
        j--;
        px[x-i-1][y-j-1]=1;
    }i=0;
    j=0;
    while (i<8||j>0){
        i++;
        j--;
        px[x-i-1][y-j-1]=1;
    }while (i>0||j<8){
        i--;
        j++;
        px[x+i-1][y+j-1]=1;
    }px[x-1][y-1]=2;

    for (i=0;i<8;i++){
            for (j=0;j<8;j++){
            cout << px[i][j];
            }cout << "\n";
    }
    return 0;
}

int reina(int y, int x){ //BIEN
int i, j;
cout <<"REINA"<<endl;
    int px[99][99];
    for (i=0;i<8;i++){
            for (j=0;j<8;j++){
            px[i][j]=0;
            }
    }
    i=0;
    j=0;
    while (i<8||j<8){
        i++;
        j++;
        px[x+i-1][y+j-1]=1;
    }while (i>0||j>0){
        i--;
        j--;
        px[x-i-1][y-j-1]=1;
    }i=0;
    j=0;
    while (i<8||j>0){
        i++;
        j--;
        px[x-i-1][y-j-1]=1;
    }while (i>0||j<8){
        i--;
        j++;
        px[x+i-1][y+j-1]=1;
    }

    int a=0,b=0;
    while (a>=0&&a<=8){
        a++;
        px[x+a-1][y-1]=1;
    }a=8;
    while (a>=0&&a<=8){
        a--;
        px[x-a-1][y-1]=1;
    }

    while (b>=0&&b<=8){
        b++;
        px[x-1][y+b-1]=1;
    }b=8;
    while (b>=0&&b<=8){
        b--;
        px[x-1][y-b-1]=1;
    }


    px[x-1][y-1]=2;

    for (i=0;i<8;i++){
            for (j=0;j<8;j++){
            cout << px[i][j];
            }cout << "\n";
    }
    return 0;
}

int rey(int y, int x){ //BIEN
    int i, j;
    cout <<"REY"<<endl;
    int px[9][9];
    for (i=0;i<8;i++){
            for (j=0;j<8;j++){
            px[i][j]=0;
            }
    }

    if(x>1||y>1||x<8||y<8){
        px[(x-2)][(y-2)]=1;
        px[x-2][y-1]=1;
        px[x-2][y]=1;
        px[x-1][y-2]=1;
        px[x-1][y-1]=1;
        px[x-1][y]=1;
        px[x][y-2]=1;
        px[x][y-1]=1;
        px[x][y]=1;
        px[x-1][y-1]=2;
    }for (i=0;i<8;i++){
            for (j=0;j<8;j++){
            cout << px[i][j];
            }cout << "\n";
    }
    return 0;
}

int main()
{
    int ficha, x, y;
    ////////////////////////////////////////
    cout <<"Bienvenido al Ajedrez, a continuacion digite el numero de la ficha"<< endl;
    cout <<"1. Peon"<< endl;
    cout <<"2. Alfil"<< endl;
    cout <<"3. Reina"<< endl;
    cout <<"4. Rey"<< endl;
    cin >> ficha;
    while (ficha>4||ficha<1){
    cout <<"Error, digite el numero de la ficha"<< endl;
    cout <<"1. Peon"<< endl;
    cout <<"2. Alfil"<< endl;
    cout <<"3. Reina"<< endl;
    cout <<"4. Rey"<< endl;
    cin >> ficha;
    }
    system ("cls");
    ///////////////////////////////////////////////////////////////
    cout <<"Acuerdese que el tablero es de 8*8"<< endl;
    cout <<"A continuacion escriba las coordenadas en X"<< endl;
    cin >> x;
    while (x<0||x>8){
    cout <<"Error, escriba las coordenadas en X"<< endl;
    cin >> x;
    }
    cout <<"A continuacion escriba las coordenadas en Y"<< endl;
    cin >> y;
    while (x<0||x>8){
    cout <<"Error, escriba las coordenadas en X"<< endl;
    cin >> x;
    }
    system ("cls");

    //////////////////////////////////////////////////////////////
    switch (ficha){
        case 1:
    peon(x,y);
    break;

    case 2:
    alfil(x,y);
    break;

    case 3:
    reina(x,y);
    break;

    case 4:
    rey(x,y);
    break;

    }
    //////////////////////////////////

    return 0;
}

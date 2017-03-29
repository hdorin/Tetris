#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
void menu_title(){
int i,j,k,l,c[10];
hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, 15+15*16);
for(i=0;i<1;i++){
gotoxy(3,8);
for(j=0;j<65;j++)
cout<<(char)219;
gotoxy(3+15,8);
for(j=0;j<65;j++)
cout<<(char)219;
}
for(i=-1;i<15;i++){
gotoxy(4+i,7);
for(j=0;j<1;j++)
cout<<(char)219;
gotoxy(4+i,8+65);
for(j=0;j<1;j++)
cout<<(char)219;
}
gotoxy(30,34);
SetConsoleTextAttribute(hConsole, 15);
cout<<"Press ENTER";
gotoxy(42,28);
cout<<"Written by Dorin Haloca";
for(i=0;i<6;i++)
do{
c[i]=rand()%7+8;
}while(c[i]==c[i-1]||c[i]==7||c[i]==8);
while(!menu){
for(k=0;k<6;k++){
l=k;
if(k==2)
l=0;
if(k>2)
l--;
    for(i=0;i<10;i++){
    SetConsoleTextAttribute(hConsole, c[k]+c[k]*16);
    for(j=0;j<8;j++){
    if(k==4)
    gotoxy(i+6,11+k*11-2+j);
    else
    gotoxy(i+6,11+(k==5?k*11-k+1:k*11)+j);
    if(letter[l].character[i][j])
    cout<<letter[l].character[i][j];
    }
    }
}
gotoxy(0,0);
Sleep(200);
for(i=0;i<5;i++)
c[i]=c[i+1];
do{
c[i]=rand()%7+8;
}while(c[i]==c[i-1]||c[i]==7||c[i]==8);
SetConsoleTextAttribute(hConsole, 3);
}
}
#endif // MENU_H_INCLUDED

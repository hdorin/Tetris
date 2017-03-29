#include<iostream>
#include<conio.h>
#include<thread>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include<fstream>
#include<string.h>
using namespace std;
HANDLE  hConsole;
void resize_window(){
int Width = 80;
int Height = 46;
    _COORD coord;
    coord.X = Width;
    coord.Y = Height;
    _SMALL_RECT Rect;
    Rect.Top = 0;
    Rect.Left = 0;
    Rect.Bottom = Height - 1;
    Rect.Right = Width - 1;
    HANDLE Handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleScreenBufferSize(Handle, coord);
    SetConsoleWindowInfo(Handle, TRUE, &Rect);
}
void gotoxy(int y,int x){
COORD coord={0,0};
coord.X=x;
coord.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
#include"variables.h"
#include"sound.h"
#include"test.h"
#include"game.h"
#include"table.h"
#include"keyboard.h"
#include"menu.h"
void game(){
int i,l,combo=0;
srand (time(NULL));
menu=-1;
score=0;
table_draw();
thread t1 (sound_effect,2);
table_countdown();
t1.join();
thread (sound_theme,++nr_sound).detach();
    for(i=0;i<4;i++)
        do{
        pos.shape[i]=rand()%7+1;
        }while(i&&pos.shape[i]==pos.shape[i-1]);
while(pos.shape[0]==pos.shape[1])
pos.shape[1]=rand()%7+1;
menu=3;
thread (table_clock).detach();
do{
for(i=0;i<3;i++)
pos.shape[i]=pos.shape[i+1];
    while(pos.shape[3]==pos.shape[2])
    pos.shape[3]=rand()%7+1;
//pos.shape[0]=getch()-48;//pentru a putea alege piesa
table_next_shapes();
pos.r=1;
if(pos.shape[0]==1)
pos.c=5;
if(pos.shape[0]>=2&&pos.shape[0]<=7&&pos.shape[0]!=5)
pos.c=4;
if(pos.shape[0]==5)
pos.c=5;
pos.l=0;
l_max=0;
game_shape(0,-1);
thread (sound_effect,4).detach();
game_move_down();
game_shape(2,-1);
game_shape(0,-2);
                    Sleep(100);
inp.on=0;
while(test_full_line()!=-1){
combo++;
l=test_full_line();
Sleep(500);
table_down(l);
Sleep(500);
    if(l<19)
    for(i=0;i<10;i++)
    if(t[l][i]&&!t[l+1][i])
    table_col_down(l,i);

    if(l<18)//in caz ca ramane o piese in aer sub linia stearsa (completa)
    for(i=0;i<10;i++)
    if(t[l+1][i]&&!t[l+2][i])
    table_col_down(l+1,i);
}
if(combo){
for(i=1;i<=combo;i++)
score+=100*i;
thread (table_score).detach();
combo=0;
}
inp.on=1;
}while(!test_game_over());
menu=-1;
sound_effect(3);
}
int main(){
char ta;
hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
variables_ascii_character_init();
variables_ascii_letter_init();
SetConsoleTitle("TETRIS");
resize_window();
thread (sound_theme,++nr_sound).detach();
    thread t1(menu_title);
                do{
                ta=getch();
                }while(ta!=13);
                menu=3;
                SetConsoleTextAttribute(hConsole, 0);
                gotoxy(30,34);
                cout<<"            ";
                gotoxy(0,0);
                sound_effect(1);
    t1.join();
inp.on=1;
thread (keyboard_input).detach();
for(;;){
SetConsoleTextAttribute(hConsole, 0);
system("cls");
    for(int i=0;i<25;i++)
    for(int j=0;j<15;j++)
    t[i][j]=0;
game();
}
return 0;}

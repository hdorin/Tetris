#ifndef TABLE_H_INCLUDED
#define TABLE_H_INCLUDED
void table_draw(){
int i;
hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, 15+15*16);
for(i=0;i<20*2;i++){
gotoxy(i+add_l,add_c+1);
cout<<(char)219<<(char)219;
gotoxy(i+add_l,add_c+1+32);
cout<<(char)219<<(char)219;
}
gotoxy(add_l+40,add_c+1);
for(i=1;i<=20*3;i++)
cout<<(char)219;
//scoreboard
gotoxy(add_l,add_c+35);
for(i=0;i<=4*6;i++)
cout<<(char)219;
gotoxy(add_l+8,add_c+35);
for(i=0;i<=4*6;i++)
cout<<(char)219;
SetConsoleTextAttribute(hConsole, 15);
    for(i=0;i<5;i++){
    gotoxy(add_l+2+i,add_c+36);
    for(int k=0;k<6;k++){
    for(int j=0;j<3;j++)
    cout<<ascii[0].character[i][j];
    cout<<(char)0;
    }
    }
for(i=0;i<=40;i++){
gotoxy(add_l+i,add_c+60);
cout<<(char)219<<(char)219;
}
//next shapes
SetConsoleTextAttribute(hConsole, 15+15*16);
gotoxy(add_l+32,add_c+35);
for(i=0;i<=4*6;i++)
cout<<(char)219;
//clean
SetConsoleTextAttribute(hConsole, 12+12*16);
for(i=0;i<20*2;i++){
gotoxy(i+add_l,add_c+3);
cout<<(char)219;
gotoxy(i+add_l,add_c+32);
cout<<(char)219;
}
for(i=1;i<8;i++){
gotoxy(add_l+i,add_c+59);
cout<<(char)219;
}
for(i=1;i<24;i++){
gotoxy(add_l+i+8,add_c+59);
cout<<(char)219;
}
for(i=1;i<8;i++){
gotoxy(add_l+i+32,add_c+59);
cout<<(char)219;
}
Sleep(500);
SetConsoleTextAttribute(hConsole, 0);
for(i=0;i<20*2;i++){
gotoxy(i+add_l,add_c+3);
cout<<(char)219;
gotoxy(i+add_l,add_c+32);
cout<<(char)219;
}
for(i=1;i<8;i++){
gotoxy(add_l+i,add_c+59);
cout<<(char)219;
}
for(i=1;i<24;i++){
gotoxy(add_l+i+8,add_c+59);
cout<<(char)219;
}
for(i=1;i<8;i++){
gotoxy(add_l+i+32,add_c+59);
cout<<(char)219;
}
gotoxy(0,0);
}
void table_countdown(){
int ii,i,jj,j,k;
hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
for(k=3;k>=0;k--){
if(k==3)
Sleep(300);
for(i=0;i<5;i++)
    for(ii=0;ii<=1;ii++)
    for(j=0;j<4;j++)
    for(jj=0;jj<=1;jj++){
        if(k==1)
        gotoxy(add_l+9+i*2+ii,add_c+5*3-2+j*2+jj);
        else
        gotoxy(add_l+9+i*2+ii,add_c+5*3+j*2+jj);
        switch(k){
        case 1: SetConsoleTextAttribute(hConsole, 10); break;
        case 2: SetConsoleTextAttribute(hConsole, 14); break;
        case 3: SetConsoleTextAttribute(hConsole, 12); break;
        case 0: SetConsoleTextAttribute(hConsole, 0); break;
        }
    cout<<ascii[k].character[i][j]<<ascii[k].character[i][j];
    }
gotoxy(0,0);
if(k)
Sleep(1000);
}
}
void table_cube(int l,int c,int d){
hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
int i,j;
        //inp.on=0;
for(i=0;i<2;i++)
    for(j=0;j<3;j++){
    gotoxy(add_l+l*2+i,add_c+(c+1)*3+j);
        if(!d)
        switch(t[l][c]){
        case 1: SetConsoleTextAttribute(hConsole, 3+3*16); break;
        case 2: SetConsoleTextAttribute(hConsole, 1+16);   break;
        case 3: SetConsoleTextAttribute(hConsole, 5+5*16); break;
        case 4: SetConsoleTextAttribute(hConsole, 8+8*16); break;
        case 5: SetConsoleTextAttribute(hConsole, 2+2*16); break;
        case 6: SetConsoleTextAttribute(hConsole, 6+6*16); break;
        case 7: SetConsoleTextAttribute(hConsole, 4+4*16); break;
        }
        else
        SetConsoleTextAttribute(hConsole, 0);
    cout<<(char)219;
    }
        //inp.on=1;
}
void table_rebuild(int l){
int i,j;
for(i=l;i>=0;i--){
for(j=0;j<10;j++)
    if(t[i][j])
    table_cube(i,j,0);
}
}
void table_down(int l){
int i,j;
inp.busy=1;
for(i=0;i<10;i++){
table_cube(l,i,1);
t[l][i]=0;
}
    for(i=l;i>=0;i--)
    for(j=0;j<10;j++)
    if(t[i][j]&&!t[i+1][j]){
    table_cube(i,j,1);
    t[i+1][j]=t[i][j];
    t[i][j]=0;
    table_cube(i+1,j,0);
    }
inp.busy=0;
}
void table_draw_shape(int d){
int i,j;
for(i=19;i>0;i--)
for(j=0;j<10;j++)
if(ttt[i][j])
table_cube(i,j,d);
}
void table_move_down(int d){
int i,j;
for(i=19;i>0;i--)
for(j=0;j<10;j++)
    if(!d&&ttt[i][j])
    t[i+1][j]=tt[i][j];
    else
    if(d&&ttt[i][j])
    t[i][j]=0;
}
int table_col_down(int l,int c){
inp.busy=1;
int nr_l=0;
    for(int i=0;i<20;i++)
    for(int j=0;j<10;j++){
    tt[i][j]=t[i][j];
    ttt[i][j]=0;
    }
for(int i=0;i<100;i++)
l_floor[i]=0;
nr_floor=0;
        if(!test_fill_col_down(l+nr_l,c))
        return 0;
//t - mat
//tt - copie mat
//ttt - doar 1
    table_draw_shape(1);
while(test_col_down(nr_l)){
for(int i=0;i<20;i++)
for(int j=0;j<10;j++)
tt[i][j]=t[i][j];
table_move_down(1);
table_move_down(0);
for(int i=0;i<20;i++)
for(int j=0;j<10;j++){
tt[i+1][j]=ttt[i][j];
ttt[i][j]=0;
}
for(int i=0;i<20;i++)
for(int j=0;j<10;j++)
ttt[i][j]=tt[i][j];
nr_l++;
}
table_draw_shape(0);
inp.busy=0;
}
void table_score(){
int aux;
int i,j,k;
aux=score;
while(inp.busy)
Sleep(1);
inp.busy=1;
hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    for(k=5;aux;k--){
    for(i=0;i<5;i++)
        for(j=0;j<3;j++){
        if(!pause)
        SetConsoleTextAttribute(hConsole, 15);
        else
        SetConsoleTextAttribute(hConsole, 12);
        gotoxy(add_l+2+i,add_c+36+k*4+j);
        cout<<ascii[aux%10].character[i][j];
        cout<<(char)0;
        }
    aux/=10;
    }
gotoxy(0,0);
inp.busy=0;
}
void table_next_shapes(){
inp.busy=1;
int aux_shape,aux_l,aux_c,aux_r;
//clear
hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, 0);
for(int i=0;i<16;i++){
gotoxy(add_l+6*2+i,add_c+14*3);
    for(int j=0;j<=11;j++)
    cout<<char(219);
}
//first
aux_l=pos.l;
aux_c=pos.c;
aux_r=pos.r;
pos.l=7;
if(pos.shape[1]==4)
pos.c=14;
else
pos.c=15;
pos.r=1;
aux_shape=pos.shape[0];
pos.shape[0]=pos.shape[1];
game_shape(0,15);
pos.shape[0]=aux_shape;
//second
pos.l=10;
if(pos.shape[2]==4)
pos.c=14;
else
pos.c=15;
aux_shape=pos.shape[0];
pos.shape[0]=pos.shape[2];
game_shape(0,15);
pos.shape[0]=aux_shape;
//third
pos.l=13;
if(pos.shape[3]==4)
pos.c=14;
else
pos.c=15;
pos.shape[0]=aux_shape;
pos.shape[0]=pos.shape[3];
game_shape(0,15);
pos.shape[0]=aux_shape;
inp.busy=0;
pos.l=aux_l;
pos.c=aux_c;
pos.r=aux_r;
}
void table_clock_draw(int s,int m,int h){
int i,j;
while(inp.busy||!inp.on)
Sleep(1);
inp.busy=1;
hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    for(i=0;i<5;i++)
        for(j=0;j<3;j++){
        if(!pause)
        SetConsoleTextAttribute(hConsole, 15);
        else
        SetConsoleTextAttribute(hConsole, 12);
        gotoxy(add_l+34+i,add_c+56+j);
        cout<<ascii[s%10].character[i][j];
        }
    for(i=0;i<5;i++)
        for(j=0;j<3;j++){
        if(!pause)
        SetConsoleTextAttribute(hConsole, 15);
        else
        SetConsoleTextAttribute(hConsole, 12);
        gotoxy(add_l+34+i,add_c+52+j);
        cout<<ascii[s/10].character[i][j];
        }
if(m!=-1){
    for(i=0;i<5;i++)
        for(j=0;j<3;j++){
        if(!pause)
        SetConsoleTextAttribute(hConsole, 15);
        else
        SetConsoleTextAttribute(hConsole, 12);
        gotoxy(add_l+34+i,add_c+46+j);
        cout<<ascii[m%10].character[i][j];
        }
    for(i=0;i<5;i++)

        for(j=0;j<3;j++){
        if(!pause)
        SetConsoleTextAttribute(hConsole, 15);
        else
        SetConsoleTextAttribute(hConsole, 12);
        gotoxy(add_l+34+i,add_c+42+j);
        cout<<ascii[m/10].character[i][j];
        }
}
if(h!=-1){
    for(i=0;i<5;i++)
        for(j=0;j<3;j++){
        if(!pause)
        SetConsoleTextAttribute(hConsole, 15);
        else
        SetConsoleTextAttribute(hConsole, 12);
        gotoxy(add_l+34+i,add_c+36+j);
        cout<<ascii[h].character[i][j];
        }
}
gotoxy(0,0);
inp.busy=0;
}
void table_clock(){
sec=-1;
mins=0;
hr=0;
int mins1=0,hr1=0;
Sleep(50);
hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, 15);
        gotoxy(add_l+35,add_c+50);
        cout<<(char)219;
        gotoxy(add_l+37,add_c+50);
        cout<<(char)219;
        gotoxy(add_l+35,add_c+40);
        cout<<(char)219;
        gotoxy(add_l+37,add_c+40);
        cout<<(char)219;
thread (table_clock_draw,0,0,0).detach();
while(menu==3){
Sleep(1000);
while(pause)
Sleep(1000);
if(menu==3)
sec++;
if(sec==60){
sec=0;
mins++;
}
if(mins==60){
mins=0;
hr++;
}
if(menu==3)
thread (table_clock_draw,sec,(mins!=mins1?mins:-1),(hr!=hr1?hr:-1)).detach();
mins1=mins;
hr1=hr;
}
getch();
}
#endif // TABLE_H_INCLUDED

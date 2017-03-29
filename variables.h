#ifndef VARIABLES_H_INCLUDED
#define VARIABLES_H_INCLUDED
int add_c=9/*23*/,add_l=2,add_time=1500;//1500
int t[25][15],tt[25][15],ttt[25][15],l_floor[100],c_floor[100],nr_floor;
int menu,pause;
int sec,mins,hr;
unsigned long score,nr_sound;
int move_time,move_rest,l_max;
int strl;
char ch=0;

struct st1{
int on,busy;
char key;
}inp;

struct st2{
int shape[5];
int r,l,c;
int d;
}pos;

struct st3{
char character[5][4];
}ascii[10];

struct st4{//nefolosita
int s_effects,s_themes,s_beeps;
int difficulty;
}setting;

struct st5{
char character[12][10];
}letter[5];

void variables_ascii_character_init(){
int i,j;
//zero
for(i=0;i<3;i++){
ascii[0].character[0][i]=219;
ascii[0].character[4][i]=219;
ascii[0].character[i+1][0]=219;
ascii[0].character[i+1][2]=219;
}
//one
for(i=0;i<5;i++){
ascii[1].character[i][2]=219;
}
ascii[1].character[1][1]=219;
//two
for(i=0;i<3;i++){
ascii[2].character[0][i]=219;
ascii[2].character[2][i]=219;
ascii[2].character[4][i]=219;
}
ascii[2].character[1][2]=219;
ascii[2].character[3][0]=219;
//three
for(i=0;i<5;i+=2){
ascii[3].character[i][1]=219;
ascii[3].character[i][0]=219;
}
for(i=0;i<5;i++)
ascii[3].character[i][2]=219;

//four
for(i=0;i<5;i++){
ascii[4].character[i][2]=219;
if(i<3)
ascii[4].character[i][0]=219;
}
ascii[4].character[2][1]=219;
//five
for(i=0;i<3;i++){
ascii[5].character[0][i]=219;
ascii[5].character[2][i]=219;
ascii[5].character[4][i]=219;
}
ascii[5].character[1][0]=219;
ascii[5].character[3][2]=219;
//six
for(i=0;i<3;i++){
ascii[6].character[0][i]=219;
ascii[6].character[2][i]=219;
ascii[6].character[4][i]=219;
}
ascii[6].character[1][0]=219;
ascii[6].character[3][0]=219;
ascii[6].character[3][2]=219;
//seven
for(i=0;i<3;i++)
ascii[7].character[0][i]=219;
for(i=1;i<5;i++)
ascii[7].character[i][2]=219;
//eight
for(i=0;i<5;i++)
for(j=0;j<3;j++)
ascii[8].character[i][j]=219;
ascii[8].character[1][1]=0;
ascii[8].character[3][1]=0;
//nine
for(i=0;i<3;i++){
ascii[9].character[0][i]=219;
ascii[9].character[2][i]=219;
ascii[9].character[4][i]=219;
}
ascii[9].character[1][0]=219;
ascii[9].character[1][2]=219;
ascii[9].character[3][2]=219;
}
void variables_ascii_letter_init(){
int i,j;
//T
for(i=0;i<2;i++)
for(j=0;j<8;j++)
letter[0].character[i][j]=219;
for(i=2;i<10;i++)
for(j=0;j<2;j++)
letter[0].character[i][j+3]=219;
//E
for(i=0;i<10;i++)
for(j=0;j<2;j++)
letter[1].character[i][j]=219;
for(i=0;i<2;i++)
for(j=2;j<8;j++){
letter[1].character[i][j]=219;
letter[1].character[i+4][j]=219;
letter[1].character[i+8][j]=219;
}
//R
for(i=0;i<10;i++)
for(j=0;j<2;j++)
letter[2].character[i][j]=219;
for(i=0;i<1;i++)
for(j=2;j<6;j++){
letter[2].character[i][j]=219;
letter[2].character[i+5][j]=219;
}
for(i=1;i<3;i++)
for(j=5+i-1;j<7+i-1;j++){
letter[2].character[i][j]=219;
letter[2].character[5-i][j]=219;
}
for(j=2;j<5;j++)
letter[2].character[6][j]=219;
for(i=7;i<10;i++)
for(j=i-3;j<i-1;j++)
letter[2].character[i][j]=219;
//I
for(i=0;i<10;i++)
for(j=0;j<2;j++)
if(i!=2)
letter[3].character[i][j+3]=219;
//S
for(i=0;i<1;i++)
for(j=2;j<7;j++){
letter[4].character[i][j]=219;
letter[4].character[i+9][j-1]=219;
}
for(i=1;i<2;i++)
for(j=1;j<8;j++){
letter[4].character[i][j]=219;
letter[4].character[i+4][j]=219;
letter[4].character[i+7][j-1]=219;
}
for(i=2;i<4;i++)
for(j=0;j<2;j++){
letter[4].character[i][j]=219;
letter[4].character[i+4][j+6]=219;
}
for(i=4;i<5;i++)
for(j=0;j<7;j++)
letter[4].character[i][j]=219;
}
#endif // VARIABLES_H_INCLUDED

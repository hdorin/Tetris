#ifndef KEYBOARD_H_INCLUDED
#define KEYBOARD_H_INCLUDED
int keyboard_code(char b){
if(b==13) return 0;
if(b==8)  return 7;
if(b==32) return 8;
if(b==-32)
switch(getch()){
case 80: return 1;
case 72: return 2;
case 77: return 3;
case 75: return 4;
}
if(b==0&&getch()==107)
return 5;
if(b==114)
return 6;
return -1;
}
void keyboard_input(){
char ch=0;
for(;;){
if(inp.on){
ch=getch();
    switch(menu){
    case 1:
    break;
    case 2:
    break;
    case 3:
            ch=keyboard_code(ch);
            if(ch==7){
            int i;
                if(!pause){
                pause=1;
                //table_score();
                table_clock_draw(sec,mins,hr);
                    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
                    SetConsoleTextAttribute(hConsole, 12);
                    for(i=0;i<5;i++){
                    gotoxy(add_l+2+i,add_c+36);
                    for(int k=0;k<6;k++){
                    for(int j=0;j<3;j++)
                    cout<<ascii[0].character[i][j];
                    cout<<(char)0;
                    }
                    }
                    table_score();
            }else{
                pause=0;
                //table_score();
                table_clock_draw(sec,mins,hr);
                    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
                    SetConsoleTextAttribute(hConsole, 15);
                    for(i=0;i<5;i++){
                    gotoxy(add_l+2+i,add_c+36);
                    for(int k=0;k<6;k++){
                    for(int j=0;j<3;j++)
                    cout<<ascii[0].character[i][j];
                    cout<<(char)0;
                    }
                    }
                table_score();
            }
            }
            if(ch==6){
            int i;
            pause=1;
            hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(hConsole, 15);
            inp.busy=0;
            system("cls");
            table_draw();
            game_shape(0,-1);
            table_next_shapes();
            table_rebuild(19);
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
            pause=0;
            table_score();
            table_clock_draw(sec,mins,hr);
            }else{
            //inp.busy=1;
            game_move_key(ch);
            Sleep(11);
            if(ch==1||ch==8)
            table_score();
            //inp.busy=0;
            }
    break;
    }

}
}
}
#endif // KEYBOARD_H_INCLUDED

#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
void game_shape(int d,int cl){
int i,j,k;
inp.busy=1;
hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
switch(pos.shape[0]){
case 1: //1x4 line
    if(pos.r==1){
        for(i=0;i<2;i++)
            for(j=0;j<12;j++){
            gotoxy(add_l+i+pos.l*2,add_c+(pos.c-1)*3+j);
                if(cl==-2)
                cl=3+3*16;
                if(d==0)
                SetConsoleTextAttribute(hConsole, (cl==-1?11+11*16:cl));
                if(d==1)
                SetConsoleTextAttribute(hConsole, 0);
            cout<<(char)219;
            }
            if(d==2)
            for(j=(pos.c<2?3-pos.c:0);j<4;j++)
            t[pos.l][pos.c-2+j]=1;
    }else{
        if(pos.l){
        for(i=0;i<(pos.l==1?2:4);i++)
            for(j=0;j<3;j++){
            gotoxy(add_l+i+(pos.l-(pos.l==1?1:2))*2,add_c+(pos.c+1)*3+j);
                if(cl==-2)
                cl=3+3*16;
                if(d==0)
                SetConsoleTextAttribute(hConsole, (cl==-1?11+11*16:cl));
                if(d==1)
                SetConsoleTextAttribute(hConsole, 0);
            cout<<(char)219;
            }
            if(d==2)
            for(i=(pos.l<2?2-pos.l:0);i<2;i++)
            t[pos.l-2+i][pos.c]=1;
        }
        for(i=0;i<4;i++)

            for(j=0;j<3;j++){
            gotoxy(add_l+i+pos.l*2,add_c+(pos.c+1)*3+j);
                if(cl==-2)
                cl=3+3*16;
                if(d==0)
                SetConsoleTextAttribute(hConsole, (cl==-1?11+11*16:cl));
                if(d==1)
                SetConsoleTextAttribute(hConsole, 0);
            cout<<(char)219;
            }
            if(d==2)
            for(i=0;i<2;i++)
            t[pos.l+i][pos.c]=1;
    }
break;
case 2: //left L
    if(pos.r==3||pos.r==1){
        if(pos.r==3||(pos.l&&pos.r==1)){
        for(i=0;i<2;i++)
            for(j=0;j<3;j++){
            if(pos.r==1)
            gotoxy(add_l+i+(pos.l-1)*2,add_c+pos.c*3+j);
            else
            gotoxy(add_l+i+(pos.l+1)*2,add_c+(pos.c+2)*3+j);
                if(cl==-2)
                cl=1+16;
                if(d==0)
                SetConsoleTextAttribute(hConsole, (cl==-1?9+9*16:cl));
                if(d==1)
                SetConsoleTextAttribute(hConsole, 0);
            cout<<(char)219;
            }
            if(d==2)
            t[(pos.r==1?(pos.l-1):(pos.l+1))][(pos.r==1?pos.c-1:pos.c+1)]=2;
        }
        for(i=0;i<2;i++)
            for(j=0;j<3*3;j++){
            if(pos.r==1)
            gotoxy(add_l+i+pos.l*2,add_c+pos.c*3+j);
            else
            gotoxy(add_l+i+pos.l*2,add_c+pos.c*3+j);
                if(cl==-2)
                cl=1+16;
                if(d==0)
                SetConsoleTextAttribute(hConsole, (cl==-1?9+9*16:cl));
                if(d==1)
                SetConsoleTextAttribute(hConsole, 0);
            cout<<(char)219;
            }
            if(d==2)
            for(j=0;j<3;j++)
            t[pos.l][pos.c-1+j]=2;
    }else{
        if(pos.r==4||(pos.l&&pos.r==2)){
        for(i=0;i<2;i++)
            for(j=0;j<6;j++){
            if(pos.r==2)
            gotoxy(add_l+i+(pos.l-1)*2,add_c+(pos.c+1)*3+j);
            else
            gotoxy(add_l+i+(pos.l+1)*2,add_c+pos.c*3+j);
                if(cl==-2)
                cl=1+16;
                if(d==0)
                SetConsoleTextAttribute(hConsole, (cl==-1?9+9*16:cl));
                if(d==1)
                SetConsoleTextAttribute(hConsole, 0);
            cout<<(char)219;
            }
            if(d==2)
            for(j=0;j<2;j++)
            t[(pos.r==2?pos.l-1:pos.l-1+j)][(pos.r==2?pos.c+j:pos.c)]=2;
        }
        for(i=0;i<2*2;i++){

            for(j=0;j<3;j++){
            if(pos.r==2)
            gotoxy(add_l+i+pos.l*2,add_c+(pos.c+1)*3+j);
            else
            gotoxy(add_l+i+(!pos.l?pos.l:pos.l-1)*2,add_c+(pos.c+1)*3+j);
                if(cl==-2)
                cl=1+16;
                if(d==0)
                SetConsoleTextAttribute(hConsole, (cl==-1?9+9*16:cl));
                if(d==1)
                SetConsoleTextAttribute(hConsole, 0);
            cout<<(char)219;
            }
        }
            if(d==2)
            for(j=0;j<2;j++)
            t[(pos.r==2?j+pos.l:pos.l+1)][(pos.r==2?pos.c:pos.c-1+j)]=2;
    }
break;
case 3: //right L
    if(pos.r==1||pos.r==3){
        if(pos.r==3||(pos.l&&pos.r==1)){
        for(i=0;i<2;i++)
            for(j=0;j<3;j++){
            if(pos.r==1)
            gotoxy(add_l+i+(pos.l-1)*2,add_c+(pos.c+2)*3+j);
            else
            gotoxy(add_l+i+(pos.l+1)*2,add_c+pos.c*3+j);
                if(cl==-2)
                cl=5+5*16;
                if(d==0)
                SetConsoleTextAttribute(hConsole, (cl==-1?13:cl));
                if(d==1)
                SetConsoleTextAttribute(hConsole, 0);
            cout<<(char)219;
            }
            if(d==2)
            t[(pos.r==1?pos.l-1:pos.l+1)][(pos.r==1?pos.c+1:pos.c-1)]=3;
        }
        for(i=0;i<2;i++)
            for(j=0;j<3*3;j++){
            gotoxy(add_l+i+pos.l*2,add_c+pos.c*3+j);
                if(cl==-2)
                cl=5+5*16;
                if(d==0)
                SetConsoleTextAttribute(hConsole, (cl==-1?13:cl));
                if(d==1)
                SetConsoleTextAttribute(hConsole, 0);
            cout<<(char)219;
            }
            if(d==2)
            for(j=0;j<3;j++)
            t[pos.l][pos.c-1+j]=3;
    }else
        if((pos.r==4)||(pos.r==2)){
        if(pos.r==2||pos.l)
        for(i=0;i<2;i++)
            for(j=0;j<6;j++){
            if(pos.r==2)
            gotoxy(add_l+i+(pos.l+1)*2,add_c+(pos.c+1)*3+j);
            else
            gotoxy(add_l+i+(pos.l-1)*2,add_c+pos.c*3+j);
                if(cl==-2)
                cl=5+5*16;
                if(d==0)
                SetConsoleTextAttribute(hConsole, (cl==-1?13:cl));
                if(d==1)
                SetConsoleTextAttribute(hConsole, 0);
            cout<<(char)219;
            }
            if(d==2)
            for(j=0;j<2;j++)
            t[(pos.r==2?(pos.l+1):(pos.l-1))][(pos.r==2?pos.c+j:pos.c-1+j)]=3;
        for(i=0;i<(!pos.l&&pos.r==2?1*2:2*2);i++)
            for(j=0;j<3;j++){
            if(pos.r==2)
            gotoxy(add_l+i+(!pos.l?pos.l:(pos.l-1))*2,add_c+(pos.c+1)*3+j);
            else
            gotoxy(add_l+i+pos.l*2,add_c+(pos.c+1)*3+j);
                if(cl==-2)
                cl=5+5*16;
                if(d==0)
                SetConsoleTextAttribute(hConsole, (cl==-1?13:cl));
                if(d==1)
                SetConsoleTextAttribute(hConsole, 0);
            cout<<(char)219;
            }
            if(d==2)
            for(j=0;j<2;j++)
            t[(pos.r==2?pos.l-1+j:pos.l+j)][pos.c]=3;
    }
break;
case 4: //square
        for(i=0;i<(!pos.l?2:4);i++)
            for(j=0;j<2*3;j++){
            gotoxy(add_l+i+(pos.l<=1?0:pos.l-1)*2,add_c+(pos.c+1)*3+j);
                if(cl==-2)
                cl=8+8*16;
                if(d==0)
                SetConsoleTextAttribute(hConsole, (cl==-1?7+7*16:cl));
                if(d==1)
                SetConsoleTextAttribute(hConsole, 0);
            cout<<(char)219;
            }
            if(d==2)
            for(i=0;i<2;i++)
            for(j=0;j<2;j++)
            t[pos.l-1+i][pos.c+j]=4;
break;
case 5: //right Z
    if(pos.r==1){
        if(pos.l){
        for(i=0;i<2;i++)
            for(j=0;j<2*3;j++){
            gotoxy(add_l+i+(pos.l-1)*2,add_c+(pos.c+1)*3+j);
                if(cl==-2)
                cl=2+2*16;
                if(d==0)
                SetConsoleTextAttribute(hConsole, (cl==-1?10+10*16:cl));
                if(d==1)
                SetConsoleTextAttribute(hConsole, 0);
            cout<<(char)219;
            }
            if(d==2)
            for(j=0;j<2;j++)
            t[pos.l][pos.c-1+j]=5;
        }
        for(i=0;i<2;i++)
            for(j=0;j<2*3;j++){
            gotoxy(add_l+i+pos.l*2,add_c+pos.c*3+j);
                if(cl==-2)
                cl=2+2*16;
                if(d==0)
                SetConsoleTextAttribute(hConsole, (cl==-1?10+10*16:cl));
                if(d==1)
                SetConsoleTextAttribute(hConsole, 0);
            cout<<(char)219;
            }
            if(d==2)
            for(j=0;j<2;j++)
            t[pos.l-1][pos.c+j]=5;
    }else{
        if(pos.l){
        for(i=0;i<2;i++)
            for(j=0;j<3;j++){
            gotoxy(add_l+i+(pos.l-1)*2,add_c+pos.c*3+j);
                if(cl==-2)
                cl=2+2*16;
                if(d==0)
                SetConsoleTextAttribute(hConsole, (cl==-1?10+10*16:cl));
                if(d==1)
                SetConsoleTextAttribute(hConsole, 0);
            cout<<(char)219;
            }
            if(d==2)
            t[pos.l-1][pos.c-1]=5;
        }
        for(k=1;k>=0;k--){
        for(i=0;i<2;i++)
            for(j=0;j<3+k*3;j++){
            gotoxy(add_l+i+pos.l*2+(1-k)*2,add_c+pos.c*3+(1-k)*3+j);
                if(cl==-2)
                cl=2+2*16;
                if(d==0)
                SetConsoleTextAttribute(hConsole, (cl==-1?10+10*16:cl));
                if(d==1)
                SetConsoleTextAttribute(hConsole, 0);
            cout<<(char)219;
            }
            if(d==2)
            for(j=0;j<=k;j++)
            t[pos.l+j][pos.c+k-1]=5;
        }
    }
break;
case 6: //T
    if(pos.r==1){
        if(pos.l){
        for(i=0;i<2;i++)
            for(j=0;j<3;j++){
            gotoxy(add_l+i+(pos.l-1)*2,add_c+(pos.c+1)*3+j);
                if(cl==-2)
                cl=6+6*16;
                if(d==0)
                SetConsoleTextAttribute(hConsole, (cl==-1?14+14*16:cl));
                if(d==1)
                SetConsoleTextAttribute(hConsole, 0);
            cout<<(char)219;
            }
            if(d==2)
            t[pos.l-1][pos.c]=6;
    }
        for(i=0;i<2;i++)
            for(j=0;j<3*3;j++){
            gotoxy(add_l+i+pos.l*2,add_c+pos.c*3+j);
                if(cl==-2)
                cl=6+6*16;
                if(d==0)
                SetConsoleTextAttribute(hConsole, (cl==-1?14+14*16:cl));
                if(d==1)
                SetConsoleTextAttribute(hConsole, 0);
            cout<<(char)219;
            }
            if(d==2)
            for(j=0;j<3;j++)
            t[pos.l][pos.c-1+j]=6;
    }else
    if(pos.r==2){
        if(pos.l){
        for(i=0;i<2;i++)
            for(j=0;j<3;j++){
            gotoxy(add_l+i+(pos.l-1)*2,add_c+(pos.c+1)*3+j);
                if(cl==-2)
                cl=6+6*16;
                if(d==0)
                SetConsoleTextAttribute(hConsole, (cl==-1?14+14*16:cl));
                if(d==1)
                SetConsoleTextAttribute(hConsole, 0);
            cout<<(char)219;
            }
            if(d==2)
            t[pos.l-1][pos.c]=6;
        }
        for(k=1;k>=0;k--){
        for(i=0;i<2;i++)
            for(j=0;j<3+k*3;j++){
            gotoxy(add_l+i+pos.l*2+(1-k)*2,add_c+(pos.c+1)*3+j);
                if(cl==-2)
                cl=6+6*16;
                if(d==0)
                SetConsoleTextAttribute(hConsole, (cl==-1?14+14*16:cl));
                if(d==1)
                SetConsoleTextAttribute(hConsole, 0);
            cout<<(char)219;
            }
            if(d==2)
            for(j=0;j<=k;j++)
            t[pos.l+(1-k)][pos.c+j]=6;
        }
    }else
    if(pos.r==3){
        for(i=0;i<2;i++)
            for(j=0;j<3*3;j++){
            gotoxy(add_l+i+pos.l*2,add_c+pos.c*3+j);
                if(cl==-2)
                cl=6+6*16;
                if(d==0)
                SetConsoleTextAttribute(hConsole, (cl==-1?14+14*16:cl));
                if(d==1)
                SetConsoleTextAttribute(hConsole, 0);
            cout<<(char)219;
            }
            if(d==2)
            for(j=0;j<3;j++)
            t[pos.l][pos.c-1+j]=6;
        for(i=0;i<2;i++)
            for(j=0;j<3;j++){
            gotoxy(add_l+i+(pos.l+1)*2,add_c+(pos.c+1)*3+j);
                if(cl==-2)
                cl=6+6*16;
                if(d==0)
                SetConsoleTextAttribute(hConsole, (cl==-1?14+14*16:cl));
                if(d==1)
                SetConsoleTextAttribute(hConsole, 0);
            cout<<(char)219;
            }
            if(d==2)
            t[pos.l+1][pos.c]=6;
    }else{
        if(pos.l){
        for(i=0;i<2;i++)
            for(j=0;j<3;j++){
            gotoxy(add_l+i+(pos.l-1)*2,add_c+(pos.c+1)*3+j);
                if(cl==-2)
                cl=6+6*16;
                if(d==0)
                SetConsoleTextAttribute(hConsole, (cl==-1?14+14*16:cl));
                if(d==1)
                SetConsoleTextAttribute(hConsole, 0);
            cout<<(char)219;
            }
            if(d==2)
            t[pos.l-1][pos.c]=6;
        }
        for(k=1;k>=0;k--){
        for(i=0;i<2;i++)
            for(j=0;j<3+k*3;j++){
            gotoxy(add_l+i+pos.l*2+(1-k)*2,add_c+(1-k)*3+pos.c*3+j);
                if(cl==-2)
                cl=6+6*16;
                if(d==0)
                SetConsoleTextAttribute(hConsole, (cl==-1?14+14*16:cl));
                if(d==1)
                SetConsoleTextAttribute(hConsole, 0);
            cout<<(char)219;
            }
            if(d==2)
            for(j=0;j<=k;j++)
            t[pos.l+j][pos.c-(1-k)]=6;
        }
    }
break;
case 7: //left Z
    if(pos.r==1){
        if(pos.l){
        for(i=0;i<2;i++)

            for(j=0;j<2*3;j++){
            gotoxy(add_l+i+(pos.l-1)*2,add_c+pos.c*3+j);
                if(cl==-2)
                cl=4+4*16;
                if(d==0)
                SetConsoleTextAttribute(hConsole, (cl==-1?12+12*16:cl));
                if(d==1)
                SetConsoleTextAttribute(hConsole, 0 );
            cout<<(char)219;
            }
            if(d==2)
            for(j=0;j<2;j++)
            t[pos.l-1][pos.c-1+j]=7;
        }
        for(i=0;i<2;i++)
            for(j=0;j<2*3;j++){
            gotoxy(add_l+i+pos.l*2,add_c+(pos.c+1)*3+j);
                if(cl==-2)
                cl=4+4*16;
                if(d==0)
                SetConsoleTextAttribute(hConsole, (cl==-1?12+12*16:cl));
                if(d==1)
                SetConsoleTextAttribute(hConsole, 0 );
            cout<<(char)219;
            }
            if(d==2)
            for(j=0;j<2;j++)
            t[pos.l][pos.c+j]=7;
    }else{
        if(pos.l){
        for(i=0;i<2;i++)
            for(j=0;j<3;j++){
            gotoxy(add_l+i+(pos.l-1)*2,add_c+(pos.c+2)*3+j);
                if(cl==-2)
                cl=4+4*16;
                if(d==0)
                SetConsoleTextAttribute(hConsole, (cl==-1?12+12*16:cl));
                if(d==1)
                SetConsoleTextAttribute(hConsole, 0 );
            cout<<(char)219;
            }
            if(d==2)
            t[pos.l-1][pos.c+1]=7;
        }
        for(k=1;k>=0;k--){
        for(i=0;i<2;i++)
            for(j=0;j<3+k*3;j++){
            gotoxy(add_l+i+pos.l*2+(1-k)*2,add_c+(pos.c+1)*3+j);
                if(cl==-2)
                cl=4+4*16;
                if(d==0)
                SetConsoleTextAttribute(hConsole, (cl==-1?12+12*16:cl));
                if(d==1)
                SetConsoleTextAttribute(hConsole, 0 );
            cout<<(char)219;
            }
            if(d==2)
            for(j=0;j<=k;j++)
            t[pos.l+j][pos.c+(1-k)]=7;
        }
    }
}
        gotoxy(0,0);//****************************
inp.busy=0;
}
int game_move_key(int x){
int r=pos.r,l=pos.l,c=pos.c; //TEST FOR SOUND (DIFFERENCE) && TEST FOR MOVE DOWN
    if((x<1||x>4)&&x!=7&&x!=8) // STOPS
    return 0;
switch(x){
case 1:  //move down
        if(!pause&&test_move_down()){
        thread (sound_effect,6).detach();
        game_shape(1,-1);
        pos.l++;
        game_shape(0,-1);
            move_time=add_time;
            move_rest=add_time;
        if(l_max<pos.l){
        l_max=pos.l;
        score++;
        }
        }
break;
case 2:  //rotate right
        if(pos.shape[0]!=4)
        if(!pause){
        if(!test_rotate_right())
        switch(pos.shape[0]){
        case 1:
                if(pos.r==1&&(pos.l==19||t[pos.l+1][pos.c])&&!t[pos.l-1][pos.c]&&!t[pos.l-2][pos.c]&&!t[pos.l-3][pos.c])
                pos.l--;
                if(pos.r==2){
                    if((!pos.c||t[pos.l][pos.c-1])&&!t[pos.l][pos.c+1]&&!t[pos.l][pos.c+2]&&!t[pos.l][pos.c+3]&&pos.c<7)
                    pos.c+=2;
                    else
                    if((pos.c==1||t[pos.l][pos.c-2])&&!t[pos.l][pos.c-1]&&!t[pos.l][pos.c+1]&&!t[pos.l][pos.c+2]&&pos.c<8)
                    pos.c++;
                    else
                    if((pos.c==9||t[pos.l][pos.c+1])&&!t[pos.l][pos.c-1]&&!t[pos.l][pos.c-2]&&!t[pos.l][pos.c-3]&&pos.c>2)
                    pos.c--;
                }
        break;
        case 2:
                if(pos.r==1){
                    if((pos.l==19||t[pos.l+1][pos.c])&&!t[pos.l-2][pos.c]&&!t[pos.l-2][pos.c+1])//dsa
                    pos.l--;
                    else
                    if(t[pos.l-1][pos.c+1]&&!t[pos.l+1][pos.c-1]&&!t[pos.l][pos.c-1]&&!t[pos.l-1][pos.c-1])
                    pos.c--;
                }
                if(pos.r==2){
                    if((pos.c==0||t[pos.l][pos.c-1])&&!t[pos.l][pos.c+2]&&!t[pos.l+1][pos.c+2]&&pos.c<8)
                    pos.c++;
                    else
                    if(t[pos.l][pos.c+1]&&!t[pos.l][pos.c-2]&&!t[pos.l][pos.c-1]&&pos.c>1)
                    pos.c--;
                    else
                    if(t[pos.l+1][pos.c+1]&&!t[pos.l-2][pos.c-1]&&!t[pos.l-2][pos.c]&&!t[pos.l-2][c+1]&&pos.c>1)
                    pos.l-=2;
                }
                if(pos.r==3){
                    if(t[pos.l+1][pos.c-1]&&!t[pos.l-1][pos.c+1]&&!t[pos.l+1][pos.c]&&!t[pos.l+1][pos.c+1])
                    pos.c++;
                    else
                    if(t[pos.l+1][pos.c]&&!t[pos.l-1][pos.c+2]&&!t[pos.l][pos.c+2]&&!t[pos.l+1][pos.c+2]&&pos.c!=8)
                    pos.c+=2;
                    else
                    if(t[pos.l-1][pos.c]&&!t[pos.l+1][pos.c]&&!t[pos.l+2][pos.c]&&!t[pos.l+2][pos.c-1])
                    pos.l++;
                }
                if(pos.r==4){
                    if((pos.c==9||t[pos.l][pos.c+1])&&!t[pos.l][pos.c-2]&&!t[pos.l-1][pos.c-2]&&pos.c>1)
                    pos.c--;
                    else
                    if((t[pos.l-1][pos.c-1]||t[pos.l][pos.c-1])&&!t[pos.l][pos.c+1]&&!t[pos.l][pos.c+2]&&pos.c<8)
                    pos.c++;
                }
        break;
        case 3:
                if(pos.r==1){
                    if(t[pos.l+1][pos.c+1]&&!t[pos.l-1][pos.c-1]&&!t[pos.l+1][pos.c-1]&&!t[pos.l+1][pos.c])
                    pos.c--;
                    else
                    if((t[pos.l+1][pos.c]||pos.l==19||t[pos.l+1][pos.c+1])&&!t[pos.l-2][pos.c]&&!t[pos.l-1][pos.c])
                    pos.l--;
                }
                if(pos.r==2){
                    if((pos.c==0||t[pos.l+1][pos.c-1]||t[pos.l][pos.c-1])&&!t[pos.l][pos.c+1]&&!t[pos.l][pos.c+2]&&pos.c<8)
                    pos.c++;
                    else
                    if(t[pos.l][pos.c+1]&&!t[pos.l][pos.c-2]&&!t[pos.l][pos.c-1]&&!t[pos.l+1][pos.c-2]&&pos.c>1)
                    pos.c--;
                }
                if(pos.r==3){
                    if(t[pos.l+1][pos.c]&&!t[pos.l-1][pos.c]&&!t[pos.l-2][pos.c]&&!t[pos.l-2][pos.c-1])
                    pos.l--;
                    else
                    if((t[pos.l-1][pos.c]||t[pos.l-1][pos.c-1])&&!t[pos.l+1][pos.c]&&!t[pos.l+2][pos.c])
                    pos.l++;
                }
                if(pos.r==4){
                    if((pos.c==9||t[pos.l][pos.c+1]||t[pos.l-1][pos.c+1])&&!t[pos.l][pos.c-2]&&!t[pos.l][pos.c-1]&&pos.c>1)
                    pos.c--;
                    else
                    if(t[pos.l][pos.c-1]&&!t[pos.l][pos.c-2]&&!t[pos.l][pos.c-1]&&pos.c<8)
                    pos.c++;
                }
        break;
        case 5:
                if(pos.r==1){
                    if(t[pos.l-1][pos.c-1]&&!t[pos.l][pos.c+1]&&!t[pos.l+1][pos.c+1])
                    pos.c++;
                    else
                    if((pos.l==19||t[pos.l+1][pos.c])&&!t[pos.l-2][pos.c-1]&&!t[pos.l-1][pos.c-1])
                    pos.l--;
                }
                if(pos.r==2){
                    if((pos.c==9||t[pos.l-1][pos.c+1])&&!t[pos.l][pos.c-2]&&!t[pos.l-1][pos.c]&&pos.c>1)
                    pos.c--;
                    else
                    if(t[pos.l-1][pos.c]&&!t[pos.l][pos.c-3]&&!t[pos.l][pos.c-2]&&!t[pos.l-1][pos.c-2]&&pos.c>2)
                    pos.c-=2;
                }
        break;
        case 6:
                if(pos.r==1&&(pos.l==19||t[pos.l+1][pos.c])&&!t[pos.l-2][pos.c]&&!t[pos.l-1][pos.c+1])
                pos.l--;
                if(pos.r==2&&(pos.c==0||t[pos.l][pos.c-1])&&!t[pos.l][pos.c+2]&&!t[pos.l+1][pos.c+1]&&pos.c<8)
                pos.c++;
                if(pos.r==3&&t[pos.l-1][pos.c]&&!t[pos.l+1][pos.c-1]&&!t[pos.l+2][pos.c])
                pos.l++;
                if(pos.r==4&&(pos.c==9||t[pos.l][pos.c+1])&&!t[pos.l][pos.c-2]&&!t[pos.l-1][pos.c-1]&&pos.c>1)
                pos.c--;
        break;
        case 7:
                if(pos.r==1){
                    if((pos.l==19||t[pos.l+1][pos.c])&&!t[pos.l-1][pos.c+1]&&!t[pos.l-2][pos.c+1])
                    pos.l--;
                    else
                    if(t[pos.l-1][pos.c+1]&&!t[pos.l][pos.c-1]&&!t[pos.l+1][pos.c-1])
                    pos.c--;
                }
                if(pos.r==2){
                    if((pos.c==0||t[pos.l-1][pos.c-1])&&!t[pos.l-1][pos.c]&&!t[pos.l][pos.c+2]&&pos.c<8)
                    pos.c++;
                    else
                    if(t[pos.l-1][pos.c]&&!t[pos.l-1][pos.c+2]&&!t[pos.l][pos.c+2]&&!t[pos.l][pos.c+3]&&pos.c<7)
                    pos.c+=2;
                }
        break;
        }
        if(test_rotate_right()||pos.r!=r||pos.l!=l||pos.c!=c){
        thread (sound_effect,7).detach();
                    if(pos.shape[0]!=4)
            if(pos.shape[0]==1||pos.shape[0]==5||pos.shape[0]==7)
                if(pos.r==2)
                pos.r=1;
                else
                pos.r=2;
            else
                if(pos.r==4)
                pos.r=1;
                else
                pos.r++;
        r=r+pos.r;
        pos.r=r-pos.r;
        r=r-pos.r;
        l=l+pos.l;
        pos.l=l-pos.l;
        l=l-pos.l;
        c=c+pos.c;
        pos.c=c-pos.c;
        c=c-pos.c;
            game_shape(1,-1);
        r=r+pos.r;
        pos.r=r-pos.r;
        r=r-pos.r;
        l=l+pos.l;
        pos.l=l-pos.l;
        l=l-pos.l;
        c=c+pos.c;
        pos.c=c-pos.c;
        c=c-pos.c;
            game_shape(0,-1);
        }
        }
break;
case 3:  //move right
            if(!pause&&test_move_right()){
            thread (sound_effect,5).detach();
            game_shape(1,-1);
            pos.c++;
            game_shape(0,-1);
                if(move_rest-250>=0){
                move_time+=250;
                move_rest-=250;
}
            }
break;
case 4:  //move left
            if(!pause&&test_move_left()){
            thread (sound_effect,5).detach();
            game_shape(1,-1);
            pos.c--;
            game_shape(0,-1);
                if(move_rest-250>=0){
                move_time+=250;
                move_rest-=250;
                }
            }
break;
case 8:
            if(!pause){
            game_shape(1,-1);
            while(test_move_down()){
            pos.l++;
            score++;
            }
                move_time=move_rest=-1;
            }
break;
}
}
void game_move_down(){
int g=1;
move_rest=add_time;
move_time=add_time;
do{
while(move_time>=0){
    if(move_time<=10)
    inp.on=0;
Sleep(2);
move_time-=2;
while(pause)
Sleep(1);
}

    if(test_move_down()){
    thread (sound_effect,8).detach();
    game_shape(1,-1);
    pos.l++;
    game_shape(0,-1);
        move_time=add_time;
        move_rest=add_time;
    }else{
    g--;
    move_time=add_time;
    move_rest=add_time;
    }
    inp.on=1;

}while(g||(move_time>=0&&test_move_down()));
}
#endif // GAME_H_INCLUDED

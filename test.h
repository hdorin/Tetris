#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED
int test_move_down(){
int i;
    switch(pos.shape[0]){
    case 1:
            switch(pos.r){
            case 1:
                    for(i=0;i<4;i++)
                    if(t[pos.l+1][pos.c-2+i])
                    return 0;
            break;
            case 2:
                    if(t[pos.l+1+1][pos.c])
                    return 0;
            break;
            }
    break;
    case 2:
            switch(pos.r){
            case 1:
                    for(i=0;i<3;i++)
                    if(t[pos.l+1][pos.c-1+i])
                    return 0;
            break;
            case 2:
                    if(t[pos.l+1+1][pos.c]||t[pos.l][pos.c+1])
                    return 0;
            break;
            case 3:
                    if(t[pos.l+1+1][pos.c+1])
                    return 0;
                    for(i=0;i<2;i++)
                    if(t[pos.l+1][pos.c-1+i])
                    return 0;
            break;
            case 4:
                    for(i=0;i<2;i++)
                    if(t[pos.l+1+1][pos.c-1+i])
                    return 0;
            break;
            }
    break;
    case 3:
            switch(pos.r){
            case 1:
                    for(i=0;i<3;i++)
                    if(t[pos.l+1][pos.c-1+i])
                    return 0;
            break;
            case 2:
                    for(i=0;i<2;i++)
                    if(t[pos.l+1+1][pos.c+i])
                    return 0;
            break;
            case 3:
                    if(t[pos.l+1+1][pos.c-1])
                    return 0;
                    for(i=0;i<2;i++)
                    if(t[pos.l+1][pos.c+i])
                    return 0;
            break;
            case 4:
                    if(t[pos.l+1+1][pos.c]||t[pos.l][pos.c-1])
                    return 0;
            break;
            }
    break;
    case 4:
            for(i=0;i<2;i++)
            if(t[pos.l+1][pos.c+i])
            return 0;
    break;
    case 5:
            switch(pos.r){
            case 1:
                    for(i=0;i<2;i++)
                    if(t[pos.l+1][pos.c-1+i])
                    return 0;
                    if(t[pos.l][pos.c+1])
                    return 0;
            break;
            case 2:
                    if(t[pos.l+1][pos.c-1]||t[pos.l+2][pos.c])
                    return 0;
            break;
            }
    break;
    case 6:
            switch(pos.r){
            case 1:
                    for(i=0;i<3;i++)
                    if(t[pos.l+1][pos.c-1+i])
                    return 0;
            break;
            case 2:
                    if(t[pos.l+1+1][pos.c]||t[pos.l+1][pos.c+1])
                    return 0;
            break;
            case 3:
                    for(i=0;i<3;i++)
                    if(t[pos.l+1+i%2][pos.c-1+i])
                    return 0;

            break;
            case 4:
                    if(t[pos.l+1][pos.c-1]||t[pos.l+1+1][pos.c])
                    return 0;
            break;
            }
    break;
    case 7:
            switch(pos.r){
            case 1:
                    if(t[pos.l][pos.c-1])
                    return 0;
                    for(i=0;i<2;i++)
                    if(t[pos.l+1][pos.c+i])
                    return 0;
            break;
            case 2:
                    if(t[pos.l+1+1][pos.c]||t[pos.l+1][pos.c+1])
                    return 0;
            break;
            }
    break;
    }
if(pos.shape[0]!=1||((pos.r!=1||pos.l!=19)&&(pos.r!=2||pos.l!=18)))
if((pos.shape[0]!=2&&pos.shape[0]!=3)||((pos.r!=1||pos.l!=19)&&(pos.r==1||pos.l!=18)))
if(pos.shape[0]!=4||pos.l!=19)
if(pos.shape[0]!=5&&pos.shape[0]!=7||pos.l!=20-pos.r)
if(pos.shape[0]!=6||((pos.r!=1||pos.l!=19)&&(pos.r==1||pos.l!=18)))
return 1;
return 0;
}
int test_move_left(){
int i;
switch(pos.shape[0]){
case 1:
        switch(pos.r){
        case 1:
                if(t[pos.l][pos.c-3])
                return 0;
        break;
        case 2:
                for(i=(pos.l<2?3-pos.l:0);i<4;i++)
                if(t[pos.l-2+i][pos.c-1])
                return 0;
        break;
        }
break;
case 2:
        switch(pos.r){
        case 1:
                for(i=(!pos.l?1:0);i<2;i++)
                if(t[pos.l-1+i][pos.c-2])
                return 0;
        break;
        case 2:
                for(i=(!pos.l?1:0);i<3;i++)
                if(t[pos.l-1+i][pos.c-1])
                return 0;
        break;
        case 3:
                if(t[pos.l][pos.c-2])
                return 0;
                if(t[pos.l+1][pos.c])
                return 0;
        break;
        case 4:
                for(i=(!pos.l?1:0);i<2;i++)
                if(t[pos.l-1+i][pos.c-1])
                return 0;
                if(t[pos.l+1][pos.c-2])
                return 0;
        break;
        }
break;
case 3:
        switch(pos.r){
        case 1:
                if(pos.l&&t[pos.l-1][pos.c])
                return 0;
                if(t[pos.l][pos.c-2])
                return 0;
        break;
        case 2:
                for(i=(!pos.l?1:0);i<3;i++)
                if(t[pos.l-1+i][pos.c-1])
                return 0;
        break;
        case 3:
                for(i=0;i<2;i++)
                if(t[pos.l+i][pos.c-2])
                return 0;
        break;
        case 4:
                if(pos.l&&t[pos.l-1][pos.c-2])
                return 0;
                if(!pos.l&&t[pos.l][pos.c-2])
                return 0;
                for(i=0;i<2;i++)
                if(t[pos.l+i][pos.c-1])
                return 0;
        break;
        }
break;
case 4:
        for(i=(!pos.l?1:0);i<2;i++)
        if(t[pos.l-1+i][pos.c-1])
        return 0;
break;
case 5:
        switch(pos.r){
        case 1:
                if(pos.l&&t[pos.l-1][pos.c-1])
                return 0;
                if(t[pos.l][pos.c-2])
                return 0;
        break;
        case 2:
                for(i=(pos.l?0:1);i<2;i++)
                if(t[pos.l-1+i][pos.c-2])
                return 0;
                if(t[pos.l+1][pos.c-1])
                return 0;
        break;
        }
break;
case 6:
        switch(pos.r){
        case 1:
                if(pos.l&&t[pos.l-1][pos.c-1])
                return 0;
                if(t[pos.l][pos.c-2])
                return 0;
        break;
        case 2:
                for(i=(!pos.l?1:0);i<3;i++)
                if(t[pos.l-1+i][pos.c-1])
                return 0;
        break;
        case 3:
                if(t[pos.l][pos.c-2]||t[pos.l+1][pos.c-1])
                return 0;
        break;
        case 4:
                for(i=(!pos.l?1:0);i<3;i++)
                if(t[pos.l-1+i][pos.c-1-i%2])
                return 0;
        break;
        }
break;
case 7:
        switch(pos.r){
        case 1:
                if(pos.l&&t[pos.l-1][pos.c-2])
                return 0;
                if(!pos.l&&t[pos.l][pos.c-2])
                return 0;
                if(t[pos.l][pos.c-1])
                return 0;
        break;
        case 2:
                if(pos.l&&t[pos.l-1][pos.c])
                return 0;
                for(i=0;i<2;i++)
                if(t[pos.l+i][pos.c-1])
                return 0;
        break;
        }
break;
}
if(pos.shape[0]!=1||((pos.r!=1||pos.c!=2)&&(pos.r!=2||pos.c!=0)))
if((pos.shape[0]!=2&&pos.shape[0]!=3)||((pos.r!=2||pos.c!=0)&&(pos.r==2||pos.c!=1)))
if(pos.shape[0]!=4||pos.c!=0)
if((pos.shape[0]!=5&&pos.shape[0]!=7)||pos.c!=(pos.shape[0]==5?1:2-pos.r))
if(pos.shape[0]!=6||((pos.r!=2||pos.c!=0)&&(pos.r==2||pos.c!=1)))
return 1;
return 0;
}
int test_move_right(){
int i;
switch(pos.shape[0]){
case 1:
        switch(pos.r){
        case 1:
                if(t[pos.l][pos.c+2])
                return 0;
        break;
        case 2:
                for(i=(pos.l<2?3-pos.l:0);i<4;i++)
                if(t[pos.l-2+i][pos.c+1])
                return 0;
        break;
        }
break;
case 2:
        switch(pos.r){
        case 1:
                if(pos.l&&t[pos.l-1][pos.c])
                return 0;
                if(t[pos.l][pos.c+2])
                return 0;
        break;
        case 2:
                if(pos.l&&t[pos.l-1][pos.c+2])
                return 0;
                if(!pos.l&&t[pos.l][pos.c+2])
                return 0;
                for(i=0;i<2;i++)
                if(t[pos.l+i][pos.c+1])
                return 0;
        break;
        case 3:
                for(i=0;i<2;i++)
                if(t[pos.l+i][pos.c+2])
                return 0;
        break;
        case 4:
                for(i=(!pos.l?1:0);i<3;i++)
                if(t[pos.l-1+i][pos.c+1])
                return 0;
        break;
        }
break;
case 3:
        switch(pos.r){
        case 1:
                for(i=(!pos.l?1:0);i<2;i++)
                if(t[pos.l-1+i][pos.c+2])
                return 0;
        break;
        case 2:
                for(i=(!pos.l?1:0);i<2;i++)
                if(t[pos.l-1+i][pos.c+1])
                return 0;
                if(t[pos.l+1][pos.c+2])
                return 0;
        break;
        case 3:
                if(t[pos.l][pos.c+2]||t[pos.l+1][pos.c])
                return 0;
        break;
        case 4:
                for(i=(!pos.l?1:0);i<3;i++)
                if(t[pos.l-1+i][pos.c+1])
                return 0;
        break;
        }
break;
case 4:
        for(i=(!pos.l?1:0);i<2;i++)
        if(t[pos.l-1+i][pos.c+2])
        return 0;
break;
case 5:
        switch(pos.r){
        case 1:
                if(pos.l&&t[pos.l-1][pos.c+2])
                return 0;
                if(!pos.l&&t[pos.l][pos.c+2])
                return 0;
                if(t[pos.l][pos.c+1])
                return 0;
        break;
        case 2:
                if(pos.l&&t[pos.l-1][pos.c])
                return 0;
                for(i=0;i<2;i++)
                if(t[pos.l+i][pos.c+1])
                return 0;
        break;
        }
break;
case 6:
        switch(pos.r){
        case 1:
                if(pos.l&&t[pos.l-1][pos.c+1])
                return 0;
                if(t[pos.l][pos.c+2])
                return 0;
        break;
        case 2:
                for(i=(!pos.l?1:0);i<3;i++)
                if(t[pos.l-1+i][pos.c+1+i%2])
                return 0;
        break;
        case 3:
                if(t[pos.l][pos.c+2]||t[pos.l+1][pos.c+1])
                return 0;
        break;
        case 4:
                for(i=(!pos.l?1:0);i<3;i++)
                if(t[pos.l-1+i][pos.c+1])
                return 0;
        break;
        }
break;
case 7:
        switch(pos.r){
        case 1:
                if(pos.l&&t[pos.l-1][pos.c+1])
                return 0;
                if(t[pos.l][pos.c+2])
                return 0;
        break;
        case 2:
                for(i=(!pos.l?1:0);i<2;i++)
                if(t[pos.l-1+i][pos.c+2])
                return 0;
                if(t[pos.l+1][pos.c+1])
                return 0;
        break;
        }
break;
}
if(pos.shape[0]!=1||((pos.r!=1||pos.c!=8)&&(pos.r!=2||pos.c!=9)))
if((pos.shape[0]!=2&&pos.shape[0]!=3)||((pos.r!=4||pos.c!=9)&&(pos.r==4||pos.c!=8)))
if(pos.shape[0]!=4||pos.c!=8)
if((pos.shape[0]!=5&&pos.shape[0]!=7)||pos.c!=(pos.shape[0]==7?8:7+pos.r))
if(pos.shape[0]!=6||((pos.r!=4||pos.c!=9)&&(pos.r==4||pos.c!=8)))
return 1;
return 0;
}
int test_rotate_right(){
int i;
switch(pos.shape[0]){
case 1:
        switch(pos.r){
        case 1:
                for(i=1;i<=2&&pos.l;i++)
                if(t[pos.l-i][pos.c])
                return 0;
                if(t[pos.l+1][pos.c])
                return 0;
        break;
        case 2:
                for(i=1;i<=2;i++)
                if(t[pos.l][pos.c-i])
                return 0;
                if(t[pos.l][pos.c+1])
                return 0;
        break;
        }
break;
case 2:
        switch(pos.r){
        case 1:
                for(i=0;i<=1&&pos.l;i++)
                if(t[pos.l-1][pos.c+i])
                return 0;
                if(t[pos.l+1][pos.c])
                return 0;
        break;
        case 2:
                if(t[pos.l][pos.c-1])
                return 0;
                for(i=0;i<=1;i++)
                if(t[pos.l-i][pos.c+1])
                return 0;
        break;
        case 3:
                if(pos.l&&t[pos.l-1][pos.c])
                return 0;
                for(i=0;i<=1;i++)
                if(t[pos.l+1][pos.c-i])
                return 0;
        break;
        case 4:
                for(i=(pos.l?1:0);i>=0;i--)
                if(t[pos.l-i][pos.c-1])
                return 0;
                if(t[pos.l][pos.c+1])
                return 0;
        break;
        }
break;
case 3:
        switch(pos.r){
        case 1:
                for(i=0;i<=1;i++)
                if(t[pos.l+1][pos.c+i])
                return 0;
                if(pos.l&&t[pos.l-1][pos.c])
                return 0;
        break;
        case 2:
                for(i=0;i<=1;i++)
                if(t[pos.l+i][pos.c-1])
                return 0;
                if(t[pos.l][pos.c+1])
                return 0;
        break;
        case 3:
                for(i=0;i<=1&&pos.l;i++)
                if(t[pos.l-1][pos.c-i])
                return 0;
                if(t[pos.l+1][pos.c])
                return 0;
        break;
        case 4:
                if(t[pos.l][pos.c-1])
                return 0;
                for(i=0;i<=(!pos.l?0:1);i++)
                if(t[pos.l-i][pos.c+1])
                return 0;
        break;
        }
break;
case 5:
        switch(pos.r){
        case 1:
                if(pos.l&&t[pos.l-1][pos.c-1])
                return 0;
                if(t[pos.l+1][pos.c])
                return 0;
        break;
        case 2:
                for(i=0;i<=1&&pos.l;i++)
                if(t[pos.l-1][pos.c+i])
                return 0;
        break;
        }
break;
case 6:
        switch(pos.r){
        case 1:
                if(t[pos.l+1][pos.c])
                return 0;
        break;
        case 2:
                if(t[pos.l][pos.c-1])
                return 0;
        break;
        case 3:
                if(t[pos.l-1][pos.c])
                return 0;
        break;
        case 4:
                if(t[pos.l][pos.c+1])
                return 0;
        break;
        }
break;
case 7:
        switch(pos.r){
        case 1:
                if(pos.l&&t[pos.l-1][pos.c+1])
                return 0;
                if(t[pos.l+1][pos.c])
                return 0;
        break;
        case 2:
                for(i=0;i<=1&&pos.l;i++)
                if(t[pos.l-1][pos.c-i])
                return 0;
        break;
        }
break;
}
if(pos.shape[0]!=1||(pos.r!=1||pos.l!=19)&&(pos.r!=2||pos.c!=9&&pos.c>1))
if(pos.shape[0]!=2&&pos.shape[0]!=3||(pos.r!=1||pos.l!=19)&&(pos.r!=2||pos.c)&&(pos.r!=4||pos.c!=9))
if(pos.shape[0]!=5||(pos.r!=1||pos.l!=19)&&(pos.r!=2||pos.c!=9))
if(pos.shape[0]!=6||(pos.r!=1||pos.l!=19)&&(pos.r!=2||pos.c)&&(pos.r!=4||pos.c!=9))
if(pos.shape[0]!=7||(pos.r!=1||pos.l!=19)&&(pos.r!=2||pos.c))
return 1;
return 0;
}
int test_full_line(){
int g=1,i,j;
for(i=19;i>=0&&g;i--){
g=0;
for(j=0;j<10;j++)
if(t[i][j]){
g++;
}
if(g==10)
return i;
}
return -1;
}
int test_game_over(){
int i;
for(i=0;i<10;i++)
if(t[0][i])
return 1;
return 0;
}
int test_fill_col_down(int l,int c){
if(tt[l][c]){
tt[l][c]=0;
ttt[l][c]=1;
if(!t[l+1][c]){
l_floor[nr_floor]=l+1;
c_floor[nr_floor]=c;
nr_floor++;
}
    if(l==19) return 0;
    if(l<20) if(!test_fill_col_down(l+1,c)) return 0;
    if(l>0)  if(!test_fill_col_down(l-1,c)) return 0;
    if(c<10) if(!test_fill_col_down(l,c+1)) return 0;
    if(c>0)  if(!test_fill_col_down(l,c-1)) return 0;
}
return 1;
}
int test_col_down(int nr_l){
for(int i=0;i<nr_floor;i++)
if(l_floor[i]+nr_l==20||t[l_floor[i]+nr_l][c_floor[i]])
return 0;
return 1;
}
#endif // TEST_H_INCLUDED

#ifndef SOUND_H_INCLUDED
#define SOUND_H_INCLUDED
void sound_game_theme(int track){
char buffer[MAX_PATH];
GetModuleFileName(NULL,buffer,sizeof(buffer));
switch(track){
case 1: strcpy(buffer+strl,"Sounds Celtic Theme.wav");buffer[strl+6]=92;  PlaySound(buffer, NULL, SND_ASYNC); Sleep(200000); break;
case 2: strcpy(buffer+strl,"Sounds Giali Theme.wav");buffer[strl+6]=92; PlaySound(buffer, NULL, SND_ASYNC); Sleep(247000); break;
case 3: strcpy(buffer+strl,"Sounds Greek Theme.wav");buffer[strl+6]=92; PlaySound(buffer,NULL,SND_ASYNC); Sleep(186000); break;
case 4: strcpy(buffer+strl,"Sounds Egypt Theme.wav");buffer[strl+6]=92; PlaySound(buffer,NULL,SND_ASYNC); Sleep(207000); break;
}
}
void sound_theme(unsigned long nr){
char buffer[MAX_PATH];
srand(time(NULL));
GetModuleFileName(NULL,buffer,sizeof(buffer));
int track1=rand()%4+1,track2;
do{
    switch(menu){
    case 0: strcpy(buffer+strl,"Sounds Title Theme.wav");buffer[strl+6]=92; while(!menu){ PlaySound(buffer, NULL, SND_ASYNC); Sleep(147000); } break;
    case 3: while(menu==3&&nr_sound==nr){sound_game_theme(track1); do{track2=track1; track1=rand()%4+1;}while(track1==track2); } break;
    }
}while(nr_sound==nr);
}
void sound_effect(int x){
char buffer[MAX_PATH];
GetModuleFileName(NULL,buffer,sizeof(buffer));
switch(x){
case 1: strcpy(buffer+strl,"Sounds Title ENTER.wav");buffer[strl+6]=92; PlaySound(buffer,NULL,SND_SYNC); break;
case 2: strcpy(buffer+strl,"Sounds Countdown.wav");buffer[strl+6]=92; PlaySound(buffer,NULL,SND_SYNC); break;
case 3: strcpy(buffer+strl,"Sounds Game over.wav");buffer[strl+6]=92; PlaySound(buffer,NULL,SND_SYNC); break;
case 4: Beep(1500,300); break;//NEW SHAPE
case 5: Beep(1000,100); break;//MOVE SIDEWAYS
case 6: Beep(1000,100); break;//MOVE DOWN KEY
case 7: Beep(700,100); break;//ROATE RIGHT
case 8: Beep(100,300); break;//MOVE DOWN FORCED
}
}
#endif // SOUND_H_INCLUDED

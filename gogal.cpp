#include "gogal.h"
int CHESS_FX=80;
int CHESS_FY=80;
int CHESS_LENGHT=100;
int WINDOWS_LENGHT=320+CHESS_FX+(CHESS_X_NUM-1)*CHESS_LENGHT;
int WINDOWS_HEIGHT=CHESS_FY*2+(CHESS_Y_NUM-1)*CHESS_LENGHT-20;
int CHESS_CIRCEL_LENGHT=10;
int XYTYPE=1;
int COLTYPE=2;
int GAMEMOD=PVE;
int AIDOWNCOLOR=BLUE;
int NETWORKCOLOR=RED;
int NETWORKMODE=0;
int CHESS_ALL_SIDE_NUM=(CHESS_X_NUM-1)*CHESS_Y_NUM+(CHESS_Y_NUM-1)*CHESS_X_NUM;
int CHESS_BOX_NUM=(CHESS_X_NUM-1)*(CHESS_Y_NUM-1);//25
int CHESS_HOR_NUM=(CHESS_X_NUM-1)*CHESS_Y_NUM;//30
int CHESS_VER_NUM=(CHESS_Y_NUM-1)*CHESS_X_NUM;//30
bool NETWORKWAIT=true;
bool FRISTNET=true;

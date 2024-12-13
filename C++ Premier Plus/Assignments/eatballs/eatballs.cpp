#include <iostream>
#include <graphics.h>
#include <cstdlib>
#include<time.h>

void initSCR();
void SCR_Draw(); //屏幕窗口绘制
void MAP_Draw();//地图绘制
void GAME_Draw();//游戏绘制
void initBall();//初始化食物小球
void Draw_Ball();//绘制食物小球
void GAME_Init(); //游戏初始化
void CreatPlayer();//创建玩家
void PL_Control(int step);//玩家控制
void Camera_POS();
int main()
{
    //绘制图片窗口
    initSCR();
    GAME_Init();
    while (1) {
        GAME_Draw();
        PL_Control(1);
    }
    std::cin.get();
}



//屏幕窗口绘制
#include <iostream>
#include <graphics.h>
#include <cstdlib>
#include<time.h>

const int SCR_W = 1024;
const int SCR_H = 800;
const int MAP_W = SCR_W * 2;
const int MAP_H = SCR_H * 2;
const unsigned int ballnum = 200;

struct Ball {
    double x, y;        //圆心坐标
    double r;           //半径
    bool flag;          //判断是否存活
    COLORREF color;     //小球的填充颜色
};

POINT REF_xy;

Ball FD_Ball[ballnum];//食物小球
Ball PlayerBall; //玩家小球
IMAGE MAP(MAP_W, MAP_H);

//摄像机坐标
void Camera_POS() {
    REF_xy.x = PlayerBall.x - SCR_W / 2;
    REF_xy.y = PlayerBall.y - SCR_H / 2;

    if (REF_xy.x < 0) {
        REF_xy.x = 0;
    }
    if (REF_xy.y < 0) {
        REF_xy.y = 0;
    }
    if (REF_xy.y >MAP_H) {
        REF_xy.y = MAP_H;
    }
    if (MAP_H-SCR_H<REF_xy.y ) {
        REF_xy.y = MAP_H - SCR_H;
    }
    if (MAP_W - SCR_W < REF_xy.x) {
        REF_xy.x = MAP_W - SCR_W;
    }
}

void SCR_Draw() {
    
    SetWorkingImage();
    Camera_POS();
    putimage(0, 0, SCR_W, SCR_H, &MAP, REF_xy.x, REF_xy.y);
}

//地图绘制
void MAP_Draw() {
    SetWorkingImage(&MAP); //设置地图为绘制设备
    setbkcolor(WHITE); //设置当前图片背景色
    cleardevice(); //使用当前背景色清空图片
}

//初始化食物小球
void initBall() {

    for (int i = 0; i < ballnum; i++)
    {
        FD_Ball[i].x = rand() % MAP_W;
        FD_Ball[i].y = rand() % MAP_H;
        FD_Ball[i].r = rand() % 10 + 1;
        FD_Ball[i].flag = 1;
        FD_Ball[i].color = RGB(rand() % 256, rand() % 256, rand() % 256);
    }
}

//初始化玩家
void Player_Init() {
    PlayerBall.x = rand() % MAP_W;
    PlayerBall.y = rand() % MAP_H;
    PlayerBall.r = rand() % 10 + 1;
    PlayerBall.flag = 1;
    PlayerBall.color = RGB(rand() % 256, rand() % 256, rand() % 256);
}

//填充小球颜色和绘制
void Draw_Ball() {
    for (int i = 0; i < ballnum; i++)
    {
        if (FD_Ball->flag) {
            setfillcolor(FD_Ball[i].color);
            solidcircle(FD_Ball[i].x, FD_Ball[i].y, FD_Ball[i].r);
        }

    }
}

//玩家小球绘制
void Player_Draw() {
    if (PlayerBall.flag) {
        setfillcolor(PlayerBall.color); //设置填充颜色
        solidcircle(PlayerBall.x, PlayerBall.y, PlayerBall.r); //绘制玩家小球
        settextcolor(RED);
        setbkmode(TRANSPARENT); //设置背景模式为透明
        settextstyle(17, 0, _T("Consolas"));//设置名称样式
        outtextxy(PlayerBall.x, PlayerBall.y, _T("小苏"));  //设置玩家小球名称
    }
}

//游戏绘制
void GAME_Draw() {
    MAP_Draw();
    Draw_Ball();
    Player_Draw();
    SCR_Draw();
}

//初始化食物小球
void GAME_Init() {
    using std::rand;
    std::srand(time(0));  //设置随机数种子
    initBall(); //食物小球初始化
    Player_Init();//玩家小球初始化

}


//创建玩家
void CreatPlayer() {
    using std::rand;
    std::srand(time(0));  //设置随机数种子
    Player_Init();
    Player_Draw();
}

//玩家控制
void PL_Control(int step) {
    if (GetAsyncKeyState(VK_UP)) {
        if (PlayerBall.y - PlayerBall.r > 0) {
            PlayerBall.y -= step;
        }

    }

    if (GetAsyncKeyState(VK_DOWN)) {
        if ((PlayerBall.y + PlayerBall.r) < MAP_H) {
            PlayerBall.y += step;
        }

    }

    if (GetAsyncKeyState(VK_LEFT)) {
        if (PlayerBall.x - PlayerBall.r > 0) {
            PlayerBall.x -= step;
        }
    }

    if (GetAsyncKeyState(VK_RIGHT)) {
        if ((PlayerBall.x + PlayerBall.r) < MAP_W) {
            PlayerBall.x += step;
        }
    }
}

void initSCR() {
    initgraph(SCR_W, SCR_H, SHOWCONSOLE); //初始化窗口
}


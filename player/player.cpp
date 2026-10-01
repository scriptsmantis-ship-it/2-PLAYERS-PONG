#include "raylib.h"
#include "player.h"

Player Player1{
    {10,300},
    20,
    100,
    0,
    Color{255,255,255,255}
};

Player Player2{
    {1250,300},
    20,
    100,
    0,
    Color{255,255,255,255}
};

float df = 5.0f;

void DrawPlayers(){

    if(IsKeyDown(KEY_W) && Player1.pos.y > 0){
        Player1.pos.y -= df;
    }
    if(IsKeyDown(KEY_S) && Player1.pos.y < 720 - Player1.h){
        Player1.pos.y += df;
    }
    if(IsKeyDown(KEY_UP) && Player2.pos.y > 0){
        Player2.pos.y -= df;
    }
    if(IsKeyDown(KEY_DOWN) && Player2.pos.y < 720 - Player2.h){
        Player2.pos.y += df;
    }

    DrawRectangle(
        Player1.pos.x,
        Player1.pos.y,
        Player1.w,
        Player1.h,
        Player1.color
    );
    DrawRectangle(
        Player2.pos.x,
        Player2.pos.y,
        Player2.w,
        Player2.h,
        Player2.color
    );
}
#include "raylib.h"
#include "ball.h"
#include "../player/player.h"
#include "../score/score.h"

struct Node{
    Vector2 pos;
    Vector2 velocity;
    int size;
    Color color;
};

Node Ball{
    {640,360},
    {10,10},
    15,
    Color{255,255,255,255}
};

void UpdateBall(){
    Ball.pos.x += Ball.velocity.x;
    Ball.pos.y += Ball.velocity.y;

    if (Ball.pos.y - Ball.size <= 0 ||
        Ball.pos.y + Ball.size >= 720)
    {
        Ball.velocity.y *= -1;
    }

    if (Ball.pos.x - Ball.size <= 0)
    {
        AddScore2();
        Ball.pos = {640, 360};
    }

    if (Ball.pos.x + Ball.size >= 1280)
    {
        AddScore1();
        Ball.pos = {640, 360};
    }

    if (CheckCollisionCircleRec(
    Ball.pos,
    Ball.size,
    Rectangle{
        Player1.pos.x,
        Player1.pos.y,
        (float)Player1.w,
        (float)Player1.h
    }))
    {
        Ball.velocity.x *= -1;
    }

    if (CheckCollisionCircleRec(
        Ball.pos,
        Ball.size,
        Rectangle{
            Player2.pos.x,
            Player2.pos.y,
            (float)Player2.w,
            (float)Player2.h
        }))
    {
        Ball.velocity.x *= -1;
    }
}

void DrawBall(){

    DrawCircle(
        Ball.pos.x,
        Ball.pos.y,
        Ball.size,
        Ball.color
    );
}

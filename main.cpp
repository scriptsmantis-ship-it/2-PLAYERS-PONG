#include <raylib.h>
#include "map/map.h"
#include "player/player.h"
#include "ball/ball.h"
#include "score/score.h"

int main()
{
    InitWindow(1280, 720, "PONG");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {   
        UpdateBall();
        BeginDrawing();
        DrawMap();
        DrawPlayers();
        DrawBall();
        DrawScore();
        EndDrawing();
    }

    CloseWindow();
}
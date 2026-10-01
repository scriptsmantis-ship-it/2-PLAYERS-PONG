#include "raylib.h"
#include "map.h"

Node Ring{
    {640,360},
    100,
    100,
    200,
    Color{160,160,160,255}
};

Node RingFeature{
    {640,360},
    100,
    100,
    150,
    Color{96,96,96,255}
};

Node Line{
    {610,0},
    50,
    720,
    200,
    Color{160,160,160,255}
};


void DrawMap(){

    ClearBackground(GRAY);

    DrawCircle(
        Ring.pos.x,
        Ring.pos.y,
        Ring.size,
        Ring.color
    );

    DrawCircle(
        RingFeature.pos.x,
        RingFeature.pos.y,
        RingFeature.size,
        RingFeature.color
    );

    DrawRectangle(
        Line.pos.x,
        Line.pos.y,
        Line.w,
        Line.h,
        Line.color
    );

}
#pragma once

struct Node{
    Vector2 pos;
    int w;
    int h;
    int size;
    Color color;
};

extern Node Ring;
extern Node RingFeature;
extern Node Line;
void DrawMap();
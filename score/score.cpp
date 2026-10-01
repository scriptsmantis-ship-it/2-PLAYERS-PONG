#include "raylib.h"
#include "score.h"

int Score1 = 0;
int Score2 = 0;

void DrawScore(){
    DrawText(TextFormat("%d",Score1), 10, 10, 40, WHITE);
    DrawText(TextFormat("%d",Score2), 1250, 10, 40, WHITE);
}

void AddScore1(){
    Score1++;
}

void AddScore2(){
    Score2++;
}
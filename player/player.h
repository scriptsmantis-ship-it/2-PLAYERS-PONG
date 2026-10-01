#pragma once

#include "raylib.h"

struct Player
{
	Vector2 pos;
	int w;
	int h;
	int size;
	Color color;
};

extern Player Player1;
extern Player Player2;

void DrawPlayers();
#pragma once

struct Vector2
{
public:

	int x;
	int y;
};

class Cell
{
public:
	Cell(int x, int y);
	~Cell();

public:
	Vector2 coordinate;
	bool isDead;
};


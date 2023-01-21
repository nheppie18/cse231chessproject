#pragma once

class Position {
public:
	Position();
	int getLocation();
	int getRow();
	int getColumn();
	int getX();
	int getY();
	bool isValid();
	int setRow(int row);
	int setCol(int col);
	Position set(int row, int col);
	int adjustRow();
	int adjustCol();
private:
	char location;
	double squareWidth;
	double squareHeight;
};
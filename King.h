#pragma once#include <iostream>#include "Piece.h"using namespace std;class TestKing;class King : protected Piece{public:	friend TestKing;	King(int col, int row, bool white);	char getLetter();	void display(gout);	int getMoves(board);};
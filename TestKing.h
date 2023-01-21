#pragma once
#include"King.h"
#include <cassert>

class TestKing {
public:
	TestKing();
	void run();
private:
	void kingFree();
	void kingBlocked();
	void kingCapture();
	void kingCastleKingMoved();
	void kingCastleRookMoved();
	void kingCastleBlocked();
	void kingCastleSuccess();
};
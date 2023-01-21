#pragma once
#include "Pawn.h"
#
class TestPawn {
public:
	TestPawn();
	void run();
private:
	void pawnBlocked();
	void pawnMoveForward();
	void pawnInitialMove();
	void pawnCapture();
	void pawnEnpassant();
	void pawnPromotion();
};
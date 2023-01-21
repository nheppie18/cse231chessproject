#include "TestPawn.h"
#include <cassert>

TestPawn::TestPawn() {

}
void TestPawn::run() {
	pawnBlocked();
	pawnMoveForward();
	pawnInitialMove();
	pawnCapture();
	pawnEnpassant();
	pawnPromotion();
}
void TestPawn::pawnBlocked() {
	Pawn whitepawn(4, 4, true);
	Pawn blackpawn(4, 5, false);

	whitepawn.getMoves();
	assert(whitepawn.moves == {});
}
void TestPawn::pawnMoveForward() {
	Pawn whitepawn(2, 4, true);

	whitepawn.getMoves();
	assert(whitepawn.moves == {"b4b5"});
}
void TestPawn::pawnInitialMove() {
	Pawn whitepawn(2, 2, true);

	whitepawn.getMoves();
	assert(whitepawn.moves == {"b2b3", "b2b4"});
}
void TestPawn::pawnCapture() {
	Pawn whitepawn(2, 6, true);
	Pawn blackpawn1(1, 7, false);
	Pawn blackpawn2(2, 7, false);
	Pawn blackpawn3(3, 7, false);

	whitepawn.getMoves();
	assert(whitepawn.moves == {"b6a7p", "b6c7p"});
}
void TestPawn::pawnEnpassant() {
	Pawn whitepawn(2, 6, true);
	Pawn blackpawn1(2, 7, false);
	Pawn blackpawn2(1, 6, false); //lastmove = 2
	
	whitepawn.getMoves();
	assert(whitepawn.moves == {"b5a6E"});
}
void TestPawn::pawnPromotion() {
	Pawn whitepawn(2, 7, true);

	whitepawn.getMoves();
	assert(whitepawn.moves == {"b7b8Q"});
}
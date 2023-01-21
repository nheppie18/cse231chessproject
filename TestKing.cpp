#include "TestKing.h"

TestKing::TestKing() {

}
void TestKing::run() {
	kingFree();
	kingBlocked();
	kingCastleKingMoved();
	kingCastleRookMoved();
	kingCastleBlocked();
	kingCastleSuccess();
}
void TestKing::kingFree() {
	King whiteking(5, 5, true);

	whiteking.getMoves();
	assert(whiteking.moves = { "e5d6", "e5e6", "e5f6", "e5d5", "e5f5", "e5d4", "e5e4", "e5f4" });
}
void TestKing::kingBlocked() {
	King whiteking(5, 5, true);
	Pawn whitepawn1(4, 6, true);
	Pawn whitepawn2(5, 6, true);
	Pawn whitepawn3(6, 6, true);
	Pawn whitepawn4(6, 5, true);
	Pawn whitepawn5(4, 4, true);
	Pawn whitepawn6(5, 4, true);
	Pawn whitepawn7(6, 4, true);

	whiteking.getMoves();
	assert(whiteking.moves == {});
}
void TestKing::kingCapture() {
	King whiteking(5, 5, true);
	Pawn blackpawn1(4, 6, false
	Pawn blackpawn2(5, 6, false);
	Pawn blackpawn3(6, 6, false);
	Pawn blackpawn4(6, 5, false);
	Pawn blackpawn5(4, 4, false);
	Pawn blackpawn6(5, 4, false);
	Pawn blackpawn7(6, 4, false);

	whiteking.getMoves();
	assert(whiteking.Moves() == { "e5d6p", "e5e6p", "e5f6p", "e5d5p", "e5f5p", "e5d4p", "e5e4p", "e5f4p" });
}
void TestKing::kingCastleKingMoved() {
	King whiteking(5, 1, true); // has moved
	Pawn whitepawn1(4, 2, true);
	Pawn whitepawn2(5, 2, true);
	Pawn whitepawn3(6, 2, true);
	Rook whiterook1(1, 1, true);
	Rook whiterook2(8, 1, true);

	whiteking.getMoves();
	assert(whiteking.Moves == { "e1f1", "e1d1" });
}
void TestKing::kingCastleRookMoved() {
	King whiteking(5, 1, true); 
	Pawn whitepawn1(4, 2, true);
	Pawn whitepawn2(5, 2, true);
	Pawn whitepawn3(6, 2, true);
	Rook whiterook1(1, 1, true);
	Rook whiterook2(8, 1, true); //has moved

	whiteking.getMoves();
	assert(whiteing.Moves == { "e1f1", "e1d1" });
}
void TestKing::kingCastleBlocked() {
	King whiteking(5, 1, true);
	Pawn whitepawn1(4, 2, true);
	Pawn whitepawn2(5, 2, true);
	Pawn whitepawn3(6, 2, true);
	Pawn whitepawn4(2, 1, true); // knight position
	Pawn whitepawn5(7, 2, true);
	Rook whiterook(1, 1, true);

	whiteking.getMoves();
	assert(whiteking.Moves == { "e1f1", "e1d1" });
}
void TestKing::kingCastleSuccess() {
	King whiteking(5, 1, true);
	Pawn whitepawn1(4, 2, true);
	Pawn whitepawn2(5, 2, true);
	Pawn whitepawn3(6, 2, true);
	Rook whiterook1(1, 1, true);
	Rook whiterook2(8, 1, true);

	whiteking.getMoves();
	assert(whiteking.Moves = { "e1f1", "e1d1", "e1g1c", "e1d1C" });
}
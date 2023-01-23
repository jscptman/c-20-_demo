#include <iostream>
#include "../format"

using namespace std;

int main(int argc, char const *argv[]){
	// new writing style 
	int King {};
	enum class PieceType { King, Queen, Rook, Pawn }; // no problem
    PieceType myPiece { PieceType::King };

	// old writing style
	bool ok { false };
	enum oldEnum { error, ok }; // error C2365: 'ok': redefinition; previous definition was 'data variable'
}


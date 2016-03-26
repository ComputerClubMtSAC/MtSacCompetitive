#include <iostream>

using namespace std;

//not working

void main(){
	bool board[8][8] = {false};

	int numPlayerPiece;
	int numOppPiece;
	int playerPiece[2];
	int oppPiece[6];
	int playerPiecex;
	int playerPiecey;
	int oppPiecex;
	int oppPiecey;
	int moves = 0;
	

	cin >> numPlayerPiece;
	for (int i = 1; i <= 2*numPlayerPiece; i++){
		if ((i % 2) == 1){
			cin >> playerPiecey;
		}
		else{
			cin >> playerPiecex;
			board[playerPiecey][playerPiecex] = true;
		}
	}
	cin >> numOppPiece;
	for (int i = 1; i <= 2*numOppPiece; i++){
		if ((i % 2) == 1){
			cin >> oppPiecey;
		}
		else{
			cin >> oppPiecex;
			board[oppPiecey][oppPiecex] = true;
		}
	}

	while(board[++playerPiecey][++playerPiecex] == true) {
		moves++;
		playerPiecex++;
		playerPiecey++;
	}
	while (board[++playerPiecey][--playerPiecex] = true){
		moves++;
		playerPiecex++;
		playerPiecey--;
	}
	cout << moves << endl;
}
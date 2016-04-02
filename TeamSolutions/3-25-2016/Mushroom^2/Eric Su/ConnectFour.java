package ConnectFour;
import java.util.*;
public class ConnectFour {
	private static int currentPlayer = 0; // 0 = Player 1, 1 = Player 2
	private static String[][] board = new String[6][7];
	
	
	public static void main (String [] args) {
		int column;
		boolean isRunning = true;
		Scanner scan = new Scanner (System.in);
		System.out.println ("Connect Four v 1.0");
		System.out.println ("Author: Eric Su");
		
		initalizeBoard();
		
		while (isRunning) {
			print();
			System.out.println ("Player " + (currentPlayer + 1) + ", where do you want to place your piece?");
			column = scan.nextInt() - 1;
			while (add(column) == false) {
				System.out.println ("Error: Invalid position. Please specify a new position: ");
				column = scan.nextInt() - 1;
			}
			if (checkWins() == true) {
				System.out.println ("Player " + (currentPlayer + 1) + " wins! ");
				isRunning = false;
			}
			
			if (currentPlayer == 0)
				currentPlayer = 1;
			else
				currentPlayer = 0;
		}
		
		System.out.println("\n\nGame over.");
	}
	
	/** Initializes (or resets) the board with empty spaces, denoted by "x." */
	public static void initalizeBoard () {
		for (int i = 0; i < 6; i++) {
			for (int j = 0; j < 7; j++) {
				board[i][j] = "x";
			}
		}
	}
	
	/** Prints out the game board's contents. */
	public static void print() {
		boolean markers = true;
		for (int i = 0; i < 6; i++) {
			for (int j = 0; j < 7; j++) {
				if (markers == true)
					System.out.print ((j+1) + " | ");
				else
					System.out.print (board[i][j] + " | ");
			}
			if (markers == true) {
				i--;
				markers = false;
			}
			System.out.println();
		}
	}
	
	private static boolean add(int column) {
		if (column > 6)
			return false;
		for (int r = 5; r >= 0; r--) {
			if (board[r][column].equals("x")) {
				if (currentPlayer == 0)
					board[r][column] = "F";
				else
					board[r][column] = "S";
				return true;
			}
		}
		return false;
	}
	
	/** Checks the board for any cases of a win scenario */
	private static boolean checkWins() {
		for (int i = 0; i < 6; i++) {
			for (int j = 0; j < 7; j++) {
				if (!(board[i][j].equals("x"))) { //found a piece
					if (checkVertical(i,j,board[i][j]) == true)
						return true;
					if (checkHorizontal(i,j,board[i][j]) == true)
						return true;
					//if (checkDiagonal(i,j,board[i][j]) == true) // Diagonal method doesn't work
						//return true;
					System.out.println ("=====");
				}
			}
		}
		
		return false;
	}
	
	private static boolean checkVertical (int r, int c, String piece) {
		int counter = 0;
		for (int j = r; j > 0; j--) {
			if (board[j][c].equals(piece)) {
				counter++;
				if (counter > 3)
					return true;
			}
		}
		
		return false;
	}
	
	private static boolean checkHorizontal (int r, int c, String piece) {
		int counter = 0;
		for (int j = c; j < 7; j++) {
			if (board[r][j].equals(piece)) {
				counter++;
				if (counter > 3)
					return true;
			}
		}
		return false;
	}
	
	private static boolean checkDiagonal (int r, int c, String piece) {
		int j = c;
		int counter = 0;
		for (int i = r; i > 0; i--) {
			System.out.println (j);
			System.out.println ("Current row: " + i + " | Current Col: " + j + " Board value: " + board[r][j]);
			if (board[i][j].equals(piece)) {
				//System.out.println ("Current row: " + r + " | Current Col: " + c + "Board value: " + board[r][j]);
				counter++;
				if (counter > 3)
					return true;
			}
			if ((j-1) >= 0) {
				j -= 1;
				//System.out.println (j);
			}
			else {
				System.out.println ("no");
				break;
			}
		}
		System.out.println (" ----- ");
		j = c;
		counter = 0;
		
		for (int i = r; i > 0; i--) {
			System.out.println ("Current row: " + i + " | Current Col: " + c + "Board value: " + board[r][j]);
			if (board[i][j].equals(piece)) {
				//System.out.println ("Current row: " + r + " | Current Col: " + c + "Board value: " + board[r][j]);
				counter++;
				if (counter > 3)
					return true;
			}
			if ((j+1) > 6)
				j++;
			else
				return false;
		}
		return false;
	}
}

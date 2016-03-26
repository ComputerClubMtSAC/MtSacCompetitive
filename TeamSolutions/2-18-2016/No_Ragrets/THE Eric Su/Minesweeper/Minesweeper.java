package Minesweeper;
import java.util.*;
public class Minesweeper {
	private static int[][] grid;
	private static int set = 0;
	
	/** Generates a minesweeper board.
	 * 		Note: -1 = mine, -2 = empty space, 3 = triggered mine
	 * 		@param str - the string that represents the minesweeper board values.*/
	public static void generateBoard (String str) {
		String line = "";
		int size = extractBoardSize (str), counter = 0, secondGrid = (size*size) + set;
		grid = new int[size][size];
		
		/*  Reads first half of string and initialize mine placements*/
		for (int i = set; i < (size * size) - 1; i+= size) { //Traverses lines.
			line = str.substring(i, i + size);
			for (int j = 0; j < line.length(); j++) {
				if (line.substring(j, j+1).equals("*"))
					grid[counter][j] = -1;
				else if (line.substring(j, j+1).equals("."))
					grid[counter][j] = -2;
			}
			counter++;
		}
		counter = 0;
		
		/* Reads second half of string and initialize user placements. */
		for (int i = secondGrid; i < str.length(); i+= size) {
			line = str.substring(i, i + size);
			for (int j = 0; j < line.length(); j++) {
				if (line.substring(j, j+1).equals("X")) {
					grid[counter][j] = checkAdjacent(counter, j, size);
				}
			}
			counter++;
		}
		
		/* Prints out the board, ignoring mine and empty spaces. */
		System.out.println("Minesweeper Board: ");
		for (int i = 0; i < grid.length; i++) {
			 for (int j = 0; j < grid.length; j++) {
				 if (grid[i][j] == -3)
					 System.out.print ("* | ");
				 else if (grid[i][j] == -1 || grid[i][j] == -2)
					 System.out.print (". | ");
				 else
					 System.out.print (grid[i][j] + " | ");
			 }
			 System.out.println();
		}
	}
	
	/** Extracts the board size from the string, which is usually the first few values of the passed string.
	 * 		@param str - the string that represents the minesweeper board values.
	 * 		@return The acquired grid's size.*/
	private static int extractBoardSize (String str) {
		String tempSize = "", cur = "";
		for (int i = 0; i < str.length(); i++) {
			cur = str.substring(i, i+1);
			if (!(cur.equals(".") || cur.equals("*") || cur.equals(" ") || cur.equals("X")))
					tempSize += str.substring(i, i+1);
		}
		set = tempSize.length();
		return Integer.parseInt(tempSize);
	}
	
	/** Checks for adjacent mines within the current space of the grid and returns an integer value representing the
	 *  number of mines.
	 *  	@param row - Row of the position 
	 *  	@param col - Col of the position
	 *  	@param size - Size of the grid
	 *  	@return amount of mines within passed position. -3 if the current position is sitting on a mine.*/
	private static int checkAdjacent (int row, int col, int size) {
		int count = 0;
		for (int r = (row - 1); r <= (row + 1); r++) {
			if (r < 0)
				r = row;
			if (r >= size)
				return count;
			
			for (int c = (col - 1); c <= (col + 1); c++) {
				if (c < 0)
					c = col;
				if (c >= size)
					continue;
				
				if (grid[r][c] == -1 || grid[r][c] == -3) {
					count++;
					if (r == row && c == col)
						return -3; //Mine is triggered. Game over
				}
			}
		}
		return count;
	}
}

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package problem6;

import java.util.Scanner;

/**
 *
 * @author csci110
 */
public class Problem6 {

    /**
     * @param args the command line arguments
     */
    static char[][] table;
    static boolean player;
    static boolean isWon;
    public static void main(String[] args) {
        table = new char[6][7];
        initialize();
        isWon = false;
        Scanner sc = new Scanner(System.in);
        while (!isWon) {
            display();
            System.out.println(((player) ? "Second" : "First") + " Player Please Enter Move: ");
            checkWon(put(sc.nextInt()));
            player = ((player) ? false : true);
        }
        display();
        System.out.println(((player) ? "First" : "Second") + " Player Won!");
    }
    
    public static int[] put(int x) {
        --x;
        for (int i = 0; i < 6; i++) {
            if (table[i][x] != 'x') {
                table[i - 1][x] = ((player) ? 'S' : 'F');
                int[] test = new int[2];
                test[0] = i;
                test[1] = x;
                return test;
            }
            else if (i == 5 && table[i][x] == 'x') {
                //System.out.println("haha");
                table[i][x] = ((player) ? 'S' : 'F');
                int[] test = new int[2];
                test[0] = i;
                test[1] = x;
                return test;
            }
            //System.out.println("Test");
        }
        return null;
    }
    
    public static void initialize() {
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 7; j++) {
                table[i][j] = 'x';
            }
        }
    }

    public static void display() {
        System.out.println("1234567");
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 7; j++) {
                System.out.print(table[i][j]);
            }
            System.out.println("");
        }
    }

    private static void checkWon(int[] test) {
        int y = test[0];
        int x = test[1];
        int count = 0;
        int xsmall = 0;
        int ysmall = 0;
        for (int i = 0; i < 6; i++) {
            if (table[i][x] == ((player) ? 'S' : 'F')) {
                count++;
            }
            else if (table[i][x] != ((player) ? 'S' : 'F')) {
                count = 0;
            }
            if (count >= 4) {
                isWon = true;
            }
        }
        count = 0;
        for (int i = 0; i < 7; i++) {
            if (table[y][i] == ((player) ? 'S' : 'F')) {
                count++;
            }
            else if (table[y][i] != ((player) ? 'S' : 'F')) {
                count = 0;
            }
            if (count >= 4) {
                isWon = true;
            }
        }
        count = 0;
        int j = x;
        int k = y;
        while (j > 0 && k > 0) {
            j--;
            k--;
        }
        xsmall = j;
        ysmall = k;
        while (xsmall < 7 && ysmall < 6) {
            if (table[ysmall][xsmall] == ((player) ? 'S' : 'F')) {
                count++;
            }
            else if (table[ysmall][xsmall] != ((player) ? 'S' : 'F')) {
                count = 0;
            }
            if (count >= 4) {
                isWon = true;
            }
            xsmall++;
            ysmall++;
        }
        
        count = 0;
        j = x;
        k = y;
        while (j > 0 && k < 6) {
            j--;
            k++;
        }
        while (xsmall < 6 && ysmall >= 0) {
            if (table[ysmall][xsmall] == ((player) ? 'S' : 'F')) {
                count++;
            }
            else if (table[ysmall][xsmall] != ((player) ? 'S' : 'F')) {
                count = 0;
            }
            if (count >= 4) {
                isWon = true;
            }
            xsmall++;
            ysmall--;
        }
            
    }
    
}

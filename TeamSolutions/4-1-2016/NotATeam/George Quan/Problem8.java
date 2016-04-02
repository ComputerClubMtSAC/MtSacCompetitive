/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package problem8;

import java.util.ArrayList;
import java.util.Scanner;

/**
 *
 * @author csci110
 */
public class Problem8 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String stuff = sc.nextLine();
        String[] morestuff = stuff.split("  ");
        boolean tree = true;
        ArrayList<Integer> test = new ArrayList<>();
        for (String data : morestuff) {
            String[] thing = data.split(" ");
            int haha = Integer.parseInt(thing[1]);
            if (!test.contains(haha)) {
                test.add(haha);
            }
            else {
                tree = false;
            }
        }
        if (tree) {
            System.out.println("This is a Tree.");
        }
        else
            System.out.println("This is not a tree.");
    }
    
}

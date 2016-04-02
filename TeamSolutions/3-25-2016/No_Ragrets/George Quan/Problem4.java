/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package problem4;

import java.util.Scanner;
import java.util.Stack;

/**
 *
 * @author csci110
 */
public class Problem4 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Stack<Integer> stack = new Stack();
        boolean test = true;
        String cmd = sc.next();
        
        while (true) {
            int elem1;
            int elem2;
            int total; 
            switch (cmd) {
                case "P":
                    stack.push(sc.nextInt());
                    break;
                case "A":
                    elem1 = stack.pop();
                    elem2 = stack.pop();
                    total = elem2 + elem1;
                    stack.push(total);
                    break;
                case "M":
                    elem1 = stack.pop();
                    elem2 = stack.pop();
                    total = elem2 * elem1;
                    stack.push(total);
                    break;
                case "S":
                    elem1 = stack.pop();
                    elem2 = stack.pop();
                    total = elem2 - elem1;
                    stack.push(total);
                    break;
                case "D":
                    elem1 = stack.pop();
                    elem2 = stack.pop();
                    total = elem2 / elem1;
                    stack.push(total);
                    break;
                case "R":
                    test = false;
                    System.out.println("=> " + stack.pop());
                    break;
            }
            cmd = sc.next();
        }
    }
    
}

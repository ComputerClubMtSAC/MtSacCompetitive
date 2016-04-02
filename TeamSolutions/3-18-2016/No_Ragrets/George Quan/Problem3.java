/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package problem3;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Hashtable;
import java.util.Iterator;
import java.util.Map.Entry;
import java.util.Scanner;

/**
 *
 * @author csci110
 */
public class Problem3 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        HashMap<String, String> conjunctions = new HashMap<>();
        HashMap<String, String> acronyms = new HashMap<>();
        Scanner sc = new Scanner(System.in);
        int totalCon = sc.nextInt();
        int totalAcro = sc.nextInt();
        System.out.println(totalCon + totalAcro);
        sc.nextLine();
        System.out.println("Conjugations");
        for (int i = 0; i < totalCon; i++) {
            String acro = sc.nextLine();
            acro = acro.replaceAll("\"", "");
            System.out.println(acro);
            String[] stuff = acro.split(" -> ");
            conjunctions.put(stuff[0], stuff[1]);
        }
        System.out.println("Acronyms");
        for (int i = 0; i < totalAcro; i++) {
            String acro = sc.nextLine();
            acro = acro.replaceAll("\"", "");
            System.out.println(acro);
            String[] stuff = acro.split(" -> ");
            acronyms.put(stuff[0], stuff[1]);
        }
        //System.out.println("Stuff");
        System.out.println("");
        
        ArrayList<String> text = new ArrayList<>();
        ArrayList<String> fixedText = new ArrayList<>();
        String line = sc.nextLine();
        while (line.charAt(0) != '#') {
            text.add(line);
            line = sc.nextLine();
        }
        
        for (String toBeFixed : text) {
            Iterator<Entry<String, String>> iter = conjunctions.entrySet().iterator();
            while (iter.hasNext()) {
                Entry<String, String> entry = iter.next();
                toBeFixed = toBeFixed.replace(entry.getKey(), entry.getValue());
            }
            iter = acronyms.entrySet().iterator();
            while (iter.hasNext()) {
                Entry<String, String> entry = iter.next();
                toBeFixed = toBeFixed.replace(entry.getKey(), (entry.getValue() + " (" + entry.getKey() + ")"));
            }
            fixedText.add(toBeFixed);
        }
        
        for (String test : fixedText) {
            System.out.println(test);
        }
        
    }
    
}

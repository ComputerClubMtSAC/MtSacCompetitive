package Wages;

import java.util.ArrayList;

public class Employee {
	public int currentWeek;
	public String name;
	public ArrayList <Days> days = new ArrayList<Days>(); //Holds all earned funding information
	public double totalMoney;
	
	public Employee (String n, int w) {
		name = n;
		currentWeek = w;
	}
	
	public int getCurrentWeek () { return currentWeek; }
	
	public String getName () { return name; }
	
	public void incrementWeek () { currentWeek++; }
	
	public void insertEarnedWages (String day, double funds) {
		Days buffer = new Days (day, funds, currentWeek);
		days.add(buffer);
	}
	
	public double calculateWeekEarnings () {
		double earnings = 0.0;
		for (int i = 0; i < days.size(); i++) {
			if (days.get(i).getWeeks() == currentWeek)
				earnings += days.get(i).getWages();
		}
		
		return earnings;
	}
	
}

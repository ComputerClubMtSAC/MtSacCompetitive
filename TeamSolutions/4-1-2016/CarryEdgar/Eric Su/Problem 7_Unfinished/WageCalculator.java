package Wages;
import java.util.*;

public class WageCalculator {
	public int currentWeek = 1;
	public ArrayList<Employee> Employees = new ArrayList <Employee> ();
	
	public WageCalculator() {
		
	}
	
	public void setWeek (String input) {
		String buffer[] = input.split(" ");
		currentWeek = Integer.parseInt(buffer[1]);
	}
	
	public void addInput (String input) {
		String employees[] = input.split(" "); //List of employees.
		String buffer[];
		for (int i = 0; i < employees.length; i++) {
			buffer = employees[i].split(",");
			/** Note:
			 * 		buffer[0] = Employee Name
			 * 		buffer[1] = Day of Week
			 * 		buffer[2] = Time In
			 * 		buffer[3] = Time Out
			 * 		buffer[4] = Amt paid/hr */
			
			double wage = calculateWages (Integer.parseInt(buffer[2]), Integer.parseInt(buffer[3]), Double.parseDouble(buffer[4]));
			if (contains(buffer[0]) == false) {
				Employee temp = new Employee (buffer[0], currentWeek);
				Employees.add(temp);
			}
			
		}
	}
	
	private double calculateWages (int timeIn, int timeOut, double wage) {
		int rawTime, hours, minutes;
		double total;
		final double constant = 100/60;
		
		rawTime = timeOut - timeIn;
		hours = rawTime/100;
		minutes = (int) ((rawTime % 100) * constant);
		total = (hours + minutes) * wage;
		
		return total;
	}
	
	private boolean contains (String input) {
		for (int i = 0; i < Employees.size(); i++) {
			if (Employees.get(i).getName().equals(input))
				return true;
		}
		return false;
	}
	
	
}

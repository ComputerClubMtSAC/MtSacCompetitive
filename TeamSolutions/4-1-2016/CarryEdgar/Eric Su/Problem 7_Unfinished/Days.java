package Wages;

public class Days {
	public String day;
	public double wages;
	public int currentWeek;
	
	public Days (String d, double w, int WEEKS) {
		day = d;
		wages = w;
		currentWeek = WEEKS;
	}
	
	public String getDay() { return day; }
	
	public double getWages() { return wages; }
	
	public int getWeeks() { return currentWeek; }
}

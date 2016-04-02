
public class SpeedTicket {

	public static void main(String[] args) {
		//

	}

	public static String sum(String s, int base) {
		int carry = 0;
		String sum = "";
		String r = reverse(s);
		for (int i = s.length(); i >= 0; i--) {
			sum += add(s.charAt(i), r.charAt(i));
			carry = 0;
		}
		return sum;
	}

	public static String reverse(String s) {
		String temp = "";
		for (int i = (s.length()-1); i >= 0; i--) {
			temp += s.charAt(i);
		}
		return temp;
	}
	
	public static boolean palin(String s) {
		if (s.compareTo(reverse(s)) == 0)
			return true;
		return false;
	}
	
	public static int add(char a, char b) {
		int inta, intb;
		if (!Character.isDigit(a))
			inta = a-55;
		if (!Character.isDigit(b))
			intb = b-55;
		return a+b;
	}
}

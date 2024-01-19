import java.util.*;
import java.time.*;
public class Leap_Year {
	public static void main(String[] args){
       try( Scanner in = new Scanner(System.in)){
		Year c = Year.of(in.nextInt());
		System.out.println(c.isLeap());}
	}
}
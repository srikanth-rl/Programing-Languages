// Java program to ReverseString using StringBuilder or StringBuffer
import java.util.*;
class Reverse_String{
	public static void main(String[] args){
	    try(Scanner in=new Scanner(System.in)){
		String input=in.next();
		// append a string into StringBuilder input1
		StringBuffer input1 = new StringBuffer();
		StringBuilder input2 = new StringBuilder();
		input1.append(input);
		// reverse StringBuilder input2
		input1.reverse();
        input2.append(input1);
		input2.reverse();
		// print reversed String
		System.out.println(input1+"\n"+input2);
	}}
}
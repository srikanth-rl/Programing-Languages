import java.util.Scanner;
public class string {
    public static void main(String[] args){
        int x=90;
        float y=9.45F;
        byte value=127;
        System.out.println("\n" + ((x + y) + value));

        long numbers=123_456_789L;
        System.out.println(numbers);

        System.out.println("STRING_IMPLEMENTATION...\n");
        String str1 = "Hai!" + "!";
        String question="\n" + "Tell me Your Name?";
        System.out.println(str1 + question);
        
        try(Scanner name = new Scanner(System.in)){//Going to get input by the object-->name
        String str2=name.next();//it will get the string input...
        System.out.println("Tell me Your Initial : ");
        char X = name.next().charAt(0);//For storing a Single character
        
        System.out.println("Tell me Your age?");
        int integer=name.nextInt();//get the intger input...

        System.out.print("Hello " +  X+" " + str2  + "!!"+"\n" + "Your age is " + integer);
        System.out.println(" and");

        if(integer>=18)System.out.println("You are Eligible for Voting.");
        else System.out.println("You are not Eligible for Voting.");
        System.out.println("The place of the letter \"i\" in (Hai!) is " + str1.indexOf("i"));
        System.out.println("Length of Your Name is " + str2.length());
        System.out.println(str2.toUpperCase() + "\t" + str2.toLowerCase());
        System.out.println(str1.replace("!","*"));
        System.out.println();
        return;
    }}
}
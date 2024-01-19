    /*Quadratic equation is: ax^2 + bx + c = 0, 
    where a, b and c are real numbers and a ≠ 0*/
import java.util.*;
class Quadratic_roots{
    public static void main(String[] args){
        try(Scanner in = new Scanner(System.in)){
        double a=in.nextDouble(),b=in.nextDouble();
        Double c=in.nextDouble(),r=(b*b)-(4*a*c);
        Double r1=(-b+Math.sqrt(r))/(2*a),r2=(-b-Math.sqrt(r))/(2*a);
        if(r==0)System.out.print("Roots are Real and Equal\n\t"+r1+"\n\t"+r2);
        else if(r>0)System.out.print("Roots are Real and Unequal\n\t"+r1+"\n\t"+r2);
        else{
            r1=-b/(2*a);r2=Math.sqrt(Math.abs(r))/(2*a);
            System.out.println("Complex Roots\n\t"+r1+" +i"+r2);
            System.out.println("\t"+r1+" -i"+r2);}}
    }
}
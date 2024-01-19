import java.util.*;
class mango_distribute{
    public static int factorial(int n){
        if(n==0)return 1;
        return n*factorial(n-1);
    }
    public static void main(String[]sri){
        Scanner in = new Scanner(System.in);
        int m = in.nextInt(),p = in.nextInt(),num=m+p-1,den=p-1;
        System.out.println("No of Comibnations to distribute: "+factorial(num)/factorial(num-den));
    }
}
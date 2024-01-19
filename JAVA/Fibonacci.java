import java.util.*;
public class Fibonacci{
    public static void main(String[]sri){
        try(Scanner in = new Scanner(System.in)){
        System.out.print("Enter a no. to find fibonacci: ");
        int n=in.nextInt();long arr[]=new long[n+2];
        arr[0]=0;arr[1]=1;
        for(int i=2;i<=n;i++)
            arr[i] = arr[i-1] + arr[i-2];
        System.out.println("Using Dynamic approach: "+arr[n]);
        }
    }
}
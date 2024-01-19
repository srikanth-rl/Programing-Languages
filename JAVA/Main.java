import java.util.*;
// public class Main{
//     public static void main(String[]sri){
//         Scanner in = new Scanner(System.in);//System.out.println(in.nextInt());
//         Map<Character,Integer> hash = new HashMap();
//         char arr[] = "utter".toCharArray();
//         for(char ch:arr)
//             hash.merge(ch,1,Integer::sum);
//         // Map.Entry map:hash.entrySet();
//         char ch = in.next().charAt(0);
//         if(hash.get(ch)>=1)
//         System.out.println("-");
//         System.out.print(hash);
//     }
// }

class Main
{   public static int fact(int n)
    {
        int f=1;
        for(int i=1;i<=n;i++)
        f*=i;
        return f;

    }
   
    public static void main(String[] args) {
        int x=3,n=6,expo=2;
        double sum=1.0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
           sum-= Math.pow(x,expo)/fact(expo);
           else
           sum+= Math.pow(x,expo)/fact(expo);
            expo+=2;
        }
        System.out.printf("%.2f",sum);
    }
}
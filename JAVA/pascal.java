import java.util.*;
import java.math.BigInteger;
public class pascal {
    public static List getRow(int rowIndex) {
        List<Integer> list=new ArrayList<>();
        list.add(1);
        for(int i=1;i<rowIndex;i++){
            list.add(computation(rowIndex,i));
        }
        if(rowIndex>0)
            list.add(1);
        return list;
    }
    public static BigInteger factorial(int n){
        BigInteger fact = BigInteger.valueOf(n);
        for (int i = n-1; i>1; i--){
            fact = fact.multiply(BigInteger.valueOf(i));
        }
        return fact;
    }
    public static int computation(int n, int r){
        return factorial(n).divide(factorial(r).multiply(factorial(n-r))).intValue();
    }
    public static void main(String[]sri){
        System.out.println((pascal.getRow(5)).toString());
    }
}
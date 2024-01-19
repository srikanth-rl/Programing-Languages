import java.util.*;
import java.util.Arrays;
class Array{
    public static void main(String[]args){
        try(Scanner in  = new Scanner(System.in)){
        int n = in.nextInt();
        int[]arr = new int[n];
        for(int i=0;i<n;i++)arr[i] = in.nextInt();
        for(int k:arr)System.out.println(k);
        Qucik_Sort.quick(arr,0,n-1);
        System.out.println(Arrays.toString(arr));
    }}
}
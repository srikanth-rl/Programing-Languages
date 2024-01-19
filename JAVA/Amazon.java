import java.util.*;
import java.util.Arrays;
class Amazon{
    public static void main(String[]sri){
        Scanner in = new Scanner(System.in);
        int n=in.nextInt(),award[]=new int[n],i,min=1,j=0,k;
        for(i=0;i<n;i++)award[i]=in.nextInt();k=in.nextInt();
        Arrays.sort(award);
        for(i=0;i<n;i++){
                if(award[i]-award[j]>k){
                    min++;
                    j=i;}
        }
        System.out.println(min);}
}
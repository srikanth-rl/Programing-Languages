import java.util.*;
class Prime{    
    public static void main(String[] args){
        try(Scanner obj = new Scanner(System.in)){//Use try for Without Errors...
            int no = obj.nextInt();
            int prime[]=new int[(no/2)+1],m=0,i,j;
            for(i=2;i<=no;i++){
                int count=0;
                for(j=2;j<i;j++){
                    if(i%j==0){count=1;break;}
                }
                if(count==0)prime[m++]=i;
            }
            for(i=0;i<m;i++){
                for(j=i+1;j<m;j++){
                    if(prime[i]+prime[j]==no)System.out.println(prime[i]+" + "+prime[j]);}
            }//System.out.print(Arrays.toString(prime));//Prime_Array
            for(i=0;i<m;i++){
                if(prime[i]!=0)System.out.print(prime[i]+" ");}
        }
    }
}
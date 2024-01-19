import java.util.Arrays;
public class Var_Args {
    public static void GetValues(int...Array){//int Array-->Array[]
    System.out.println(Arrays.toString(Array));}
    public static void  main(String...args){
    GetValues(1,2,3,4,5);}
}
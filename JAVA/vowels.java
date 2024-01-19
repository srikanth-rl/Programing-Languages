import java.util.*;
class vowels{
    public static Boolean isVowel(char c){
        return c=='a'|c=='e'|c=='i'|c=='o'|c=='u';}
    public static void main(String[]sri){
        try(Scanner in = new Scanner(System.in)){
        char arr[] = in.next().toCharArray();
        String s = arr[0]+"";
        for(int i=1;i<arr.length;i++){
            if(isVowel(arr[i])&isVowel(arr[i-1]))continue;
            s+=arr[i];
        }
        System.out.print(s);}
    }
}
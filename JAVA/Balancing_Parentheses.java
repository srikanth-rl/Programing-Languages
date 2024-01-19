import java.util.*;
class Balancing_Parentheses{
    public static boolean isValid(String s) {
        Stack<Character> stack = new Stack<>();
        for (char c : s.toCharArray()) {
            if      (c == '(')stack.push(')');
            else if (c == '{')stack.push('}');
            else if (c == '[')stack.push(']');
            else if (stack.isEmpty() || stack.pop() != c)return false;
        }
        return stack.isEmpty();}
    public static void main(String[]sri){
        try(Scanner in = new Scanner(System.in)){
        System.out.print(isValid(in.next()));}}
}
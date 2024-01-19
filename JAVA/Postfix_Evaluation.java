import java.util.*;
class Postfix_Evaluation{
    public static void main(String[]sri){
        Scanner in = new Scanner(System.in);
        Stack<Integer> stack = new Stack<>();
        String str = in.nextLine();
        for(int i=0;i<str.length();i++){
            char ch = str.charAt(i);
            if(ch==' ')
                continue;
            if(Character.isDigit(ch)){
                int n=0;
                while(Character.isDigit(ch)){
                    n=n*10+(int)ch-'0';i++;
                    ch = str.charAt(i);
                }i--;
                stack.push(n);}
            else{
                int v1=stack.pop(),v2=stack.pop();
                switch(ch){
                    case '+':stack.push(v2+v1);break;
                    case '-':stack.push(v2-v1);break;
                    case '*':stack.push(v2*v1);break;
                    case '/':stack.push(v2/v1);break;
                    case '^':stack.push((int)(Math.pow(v2,v1)));break;}
            }
        }
        System.out.print(stack.pop());}
}
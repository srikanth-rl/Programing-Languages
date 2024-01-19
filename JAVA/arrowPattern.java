public class arrowPattern {
    public static void right(int end){
        for(int k1 = 1;k1 < end-1;k1++)
            System.out.print("* ");
    }
    public static void space_Star(int k,int n){
        for (int j = 1; j <= (2*k-1)/2; j++)
            System.out.print("  ");

        for (int j = 1; j <= n; j++)
            System.out.print("* ");
    }
    public static void main(String[] args) {
        int rows = 6,k = rows,r = 2*rows-1;
        for (int i = 1; i <= rows; i++) {
            arrowPattern.space_Star(k--,i);
            if (i>2)arrowPattern.right(r--);
            System.out.println();
        }
        k = 2;
        r+=2;
        for (int i = rows-1; i>-1; i--) {
            arrowPattern.space_Star(k++,i);
            if (i>2)arrowPattern.right(r++);
            System.out.println();
        }
    }
}
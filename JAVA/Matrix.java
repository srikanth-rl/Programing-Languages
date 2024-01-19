import java.util.*;
public class Matrix{
    static final Scanner in = new Scanner(System.in);
    static void multiply(int r1,int c1,int r2,int c2){
        int mat1[][] = new int[r1][c1],mat2[][] = new int[r2][c2];
        for(int i=0;i<r1;i++)
            for(int j=0;j<c1;j++) mat1[i][j] = in.nextInt();
        for(int i=0;i<r2;i++)
            for(int j=0;j<c2;j++) mat2[i][j] = in.nextInt();
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){ int x=0;
                for(int k=0;k<c1;k++) x+=mat1[i][k]*mat2[k][j];
                System.out.print(x+" ");
            }   System.out.println();
        }
    }
    public static void main(String[]sri){
        int r1 = in.nextInt(),c1 = in.nextInt(), r2 = in.nextInt(),c2 = in.nextInt();
        Matrix.multiply(r1,c1,r2,c2);}
}
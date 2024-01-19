import java.util.*;
class Qucik_Sort{
    private static int partition(int arr[],int low,int high){
        int pivot=arr[high];
        int i=low-1;
        for(int j=low;j<high;j++){
            if(arr[j]<=pivot){
                int temp=arr[++i];
                arr[i]=arr[j];
                arr[j]=temp;}
        }
        int temp=arr[i+1];
        arr[i+1]=arr[high];
        arr[high]=temp;
        return i+1;
    }
    public static void quick(int arr[],int low,int high){
        if(low<high){
            int pivot=partition(arr,low,high);
            quick(arr,low,pivot-1);
            quick(arr,pivot+1,high);}
    }
    public static void main(String[]args){
        try (Scanner in = new Scanner(System.in)) {
            int size=in.nextInt(),arr[] = new int[size];
            for(int i=0;i<size;i++)arr[i]=in.nextInt();
            Qucik_Sort.quick(arr,0,size-1);
            System.out.println(Arrays.toString(arr));}
    }
}
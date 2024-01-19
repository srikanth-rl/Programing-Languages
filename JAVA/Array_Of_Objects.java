import java.util.*;
class Student{
    String Name,Roll_No,Address;
    Student(String Roll_No,String Name,String Address){
        this.Name=Name;
        this.Roll_No=Roll_No;
        this.Address=Address;
        System.out.println("Name : "+Name);
        System.out.println("Roll_No : "+Roll_No);
        System.out.println("Address : "+Address);}
    // void Average(){
    //     double marks[]=new double[5],tot=0;
    //     for(int i=1;i<=5;i++){
    //         System.out.println("Enter Subject "+i+" Mark");
    //         marks[i]=in.nextDouble();tot+=marks[i];}
    //     System.out.println("Total : "+tot+"\n"+"Average : "+tot/5);}
}
class Array_Of_Objects {
    public static void main(String[]args){
        try(Scanner in = new Scanner(System.in)){
        int n=in.nextInt();
        String Roll_No,Name,Address;
        Student[]arr=new Student[n];
        for(int i=0;i<n;i++){
            System.out.println("ENTER ROLL_NO");
            Roll_No=in.next();
            System.out.println("ENTER NAME");
            Name=in.next();
            System.out.println("ENTER ADDRESS");
            in.nextLine();//important for scanning next line...
            Address=in.nextLine();
            arr[i]=new Student(Roll_No,Name,Address);
            System.out.println("-----------");}}
    }
}
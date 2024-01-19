// Default Constructor...
class Constructor1{
    int length,breadth;
    Constructor1(){
        System.out.println("Default Constructor called");
        length=breadth=4;}
// Parameterized Constructor...
    Constructor1(int length,int breadth){
        System.out.println("2 Paramter Constructor called");
        this.length=length;
        this.breadth=breadth;}
// Constructor Overloading...
    Constructor1(int k){
        System.out.println("Same Constructor with different Parameter called");
        length=breadth=k;}
// Copy and Passing Constructor as a Parameter...
    Constructor1(Constructor1 object){
        System.out.println("Copy Constructor called");
        length=object.length;
        breadth=object.breadth;}
    public int AreaOfRectangle(){
        return length*breadth;}
}
class Constructor{
    public static void main(String[]args){
        Constructor1 o1 = new Constructor1();
        System.out.println("Area : "+o1.AreaOfRectangle()+"\n");

        Constructor1 o2 = new Constructor1(2,5);
        System.out.println("Area : "+o2.AreaOfRectangle()+"\n");
        
        Constructor1 o3 = new Constructor1(3);
        System.out.println("Area : "+o3.AreaOfRectangle()+"\n");
        
        Constructor1 o4 = new Constructor1(o2);
        System.out.println("Area : "+o4.AreaOfRectangle()+"\n");
    }
}
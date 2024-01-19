class one extends Thread{
    @Override//default overriding the thread run method....
    public void run(){
        for(int i=1;i<=5;i++){
            System.out.println(i);
            try{Thread.sleep(1000);}
            catch(Exception e){System.out.println(e);}
        }
    }
}
class two extends Thread{
    public void run(){
        for(int i=1;i<=5;i++){
            System.out.println("Hi");
            try{Thread.sleep(1000);}
            catch(Exception e){System.out.println(e);}
        }
    }
}
class multi implements Runnable{
    public void run(){
        for(int i=0;i<5;i++){
            System.out.println("inheriting other classes and also Using Thread...");
            try{Thread.sleep(1000);}
            catch(Exception e){System.out.println(e);}
        }
    }
}
class calculate{
    int n;
    synchronized public void multiply(int n){//use synchronized to run the entire below method...
        for(int i=1;i<=5;i++)
            System.out.println(i+" x "+n+" = "+i*n);
    }
}
public class MultiThreading {
  public static void main(String[]sri){
        one o = new one();
        two t = new two();
        Runnable multi = new multi();
        calculate cal = new calculate();
            Thread t1 = new Thread(o);
            Thread t2 = new Thread(t);
            Thread t3 = new Thread(multi);//pass the class in thread...
            t1.setPriority(Thread.MAX_PRIORITY);//MIN_PRIORITY = 1,NORM_PRIORITY = 5(default)..
            t2.setPriority(Thread.NORM_PRIORITY);//MAX_PRIORITY = 10...
            t3.setPriority(Thread.MIN_PRIORITY);//which priority is larger that'll start first....
            Thread t4 = new Thread(){//run method in a thread for passing an arguement to a class..
                public void run(){
                    cal.multiply(10);//object.method to run...
                }
            };
            Thread t5 = new Thread(){//run method in a thread for passing an arguement to a class..
                public void run(){
                    cal.multiply(5);//object.method to run...
                }
            };
            
        t1.start();//we can start by both object of class or created thread obj....
        t2.start();
        t3.start();
        t4.start();
        t5.start();
        /* Use join for not compiling the remaining main class code..*/
        try{
            t1.join();t2.join();t3.join();t4.join();
        }catch(Exception e){System.out.println(e);}
        System.out.println("Final_Statement...");
  }  
}
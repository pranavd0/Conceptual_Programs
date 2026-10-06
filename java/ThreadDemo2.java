class Demo extends Thread{
    public void run()
    {
        System.out.println("Thread is running");
    }
}
public class ThreadDemo2 {
    public static void main(String[] args)
    {
        System.out.println("inside main thread");

        Demo dobj1=new Demo();
        Demo dobj2=new Demo();

        dobj1.start();
        dobj2.start();
    }
}

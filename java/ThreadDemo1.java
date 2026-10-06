public class ThreadDemo1 {
    public static void main(String[] args) {
        
        System.out.println("inside main");

        Thread t = Thread.currentThread();

        System.out.println("Current thread Name is : "+t.getName());

        System.out.println("Current Thread is TID is:"+t.getId());

        System.out.println("Thread is alive or not:"+t.isAlive());

        System.out.println("Thread Priority is :"+t.getPriority());
    }
}

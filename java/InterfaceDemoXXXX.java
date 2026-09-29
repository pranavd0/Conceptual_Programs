interface A
{
    void fun();         
}

interface Base
{
    void gun();    
}

class Demo implements A,B
{
    public void fun()
    {
        System.out.println("inside demo fun");
    }

    public void gun()
    {
        System.out.println("inside demo gun");
    }
}

public class InterfaceDemoXXXX 
{
    public static void main(String[] args) 
    {
        Demo dobj =new Demo();
        dobj.fun();
        dobj.gun();
    }
}

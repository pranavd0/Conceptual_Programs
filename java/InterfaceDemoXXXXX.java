interface A
{
    void fun();         
}

interface Base
{
    void fun(int no);    
}

class Demo implements A,B
{
    public void fun()
    {
        System.out.println("inside demo fun");
    }

    public void fun(int no)
    {
        System.out.println("inside demo fun with no");
    }
}

public class InterfaceDemoXXXXX 
{
    public static void main(String[] args) 
    {
        Demo dobj =new Demo();
        dobj.fun();
        dobj.fun(11);
    }
}

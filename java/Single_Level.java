class Base
{
    public int i,j;

    public Base()
    {
        System.out.println("inside Base constructor");
    }

    public void fun()
    {
        System.out.println("inside Base fun");
    }

    public void gun()
    {
        System.out.println("inside Base gun");
    }
}

class Derived extends Base
{
    public int x,y;

    public Derived()
    {
        System.out.println("inside Derived contructor");
    }

    public void sun()
    {
        System.out.println("inside Derived sun");
    }
}

class Single_Level 
{
    public static void main(String A[])
    {
        Derived dobj =new Derived();
        dobj.fun();
        dobj.gun();
        dobj.sun();
    }
}

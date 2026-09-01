class Demo
{
    public Demo()
    {
        System.out.println("inside default constructor");
    }

    public Demo(int i, int j)
    {
        System.out.println("inside paramaterised constructor");
    }
}



public class Constructor_Demo
{
    public static void main(String A[])
    {
        Demo dobj1=new Demo();
        Demo dobj2=new Demo(11,21);
        
    }
}

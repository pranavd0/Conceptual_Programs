interface Demo
{
    int no1=11;
    void fun();
}

class Hello implements Demo
{
    public void fun()
    {

    }
}

public class InterfaceDemoXX 
{
    public static void main(String[] args) 
    {
        System.out.println(Demo.no1);
        Demo.no1++;    //Demo.no1=Demo.no1+1;
    }
}

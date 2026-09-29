interface Calculations
{
    int addition(int no1,int no2);
    int subtraction(int no1,int no2);
}
class Mathematics implements Calculations
{
    public int addition(int no1,int no2)
    {
        return no1+no2;
    }
    public int subtraction(int no1,int no2)
    {
        return no1-no2;
    }
    int Multiplication(int no1,int no2)
    {
        return no1*no2;
    }
}
public class InterfaceDemo {
    public static void main(String[] args) {
        Mathematics mobj=new Mathematics();
        System.out.println(mobj.addition(11,10));
        System.out.println(mobj.subtraction(11,10));
        System.out.println(mobj.Multiplication(11,10));
    }
}

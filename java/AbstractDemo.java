abstract class Base
{
    public int i,j;

    public int addition(int no1,int no2)               //1000
    {
        return no1+no2;
    }

    public abstract int Subtraction(int no1,int no2); //----
}


class Derived extends Base
{
    public int x;

    public int Subtraction(int no1,int no2)            //2000
    {
        return no1-no2;
    }

    public int Multiplication(int no1,int no2)         //3000
    {
        return no1*no2;
    }
}

class AbstractDemo
{
    public static void main(String A[])
    {
        Derived dobj=new Derived();
        int ret=0;

        ret=dobj.addition(11,10);
        System.out.println("Addition is:"+ret);

        ret=dobj.Subtraction(11,10);
        System.out.println("subtraction is:"+ret);

        ret=dobj.Multiplication(11,10);
        System.out.println("Multiplication is:"+ret);
    }
}
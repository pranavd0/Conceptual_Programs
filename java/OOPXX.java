class Arithmetic
{
    public int no1;
    public int no2;

    public Arithmetic()
    {
        this.no1=0;
        this.no2=0;
    }
    
    public Arithmetic(int i, int j)
    {
        this.no1=i;
        this.no2=j;
    }

    public int Addition()
    {
        int ans=0;
        ans=this.no1+this.no2;
        return ans;
    }

    public int Subtraction()
    {
        int ans=0;
        ans=this.no1-this.no2;
        return ans;
    }
}

public class OOPXX 
{
    public static void main(String A[])
    {
        Arithmetic aobj1=new Arithmetic(21,10);

        int result=0;

        result=aobj1.Addition();
        System.out.println("Addition is:"+result);

        result=0;
        result=aobj1.Subtraction();
        System.out.println("Subtraction is:"+result);
    }
}

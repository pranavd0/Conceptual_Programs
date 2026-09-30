import java.util.Scanner;
public class ExceptionDemo1XX 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int ans=0,no1=0,no2=0;

        try{
            System.out.println("enter first number");
            no1=sobj.nextInt();

            System.out.println("enter second number");
            no2=sobj.nextInt();
            
            ans=no1/no2;     //exception prone code
        }
        catch(ArithmeticException aobj)
        {
            System.out.println("Exception Occured"+aobj);
        }
        catch(Exception eobj)
        {
            System.out.println("inside generic catch"+eobj);
        }
        finally
        {
            System.out.println("inside finally block");
        }

        System.out.println("Division is:"+ans);
    }
}

import java.util.Scanner;

class AgeInvalid extends Exception
{
    public AgeInvalid(String str)
    {
        super(str);
    }
}

public class ExceptionDemo4 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int age=0;

        System.out.println("Enter Your Age");
        age=sobj.nextInt();

        try
        {
            if(age<18)
            {
                throw new AgeInvalid("You are under age");
            }
            else
            {
                System.out.println("Welcome to ----hub");
            }
        }
        catch(AgeInvalid aobj)
        {
            System.out.println("Exception occured due to age");
        }
    }
}

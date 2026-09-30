import java.util.Scanner;
public class ExceptionDemo1 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int ans=0,no1=0,no2=0;

        System.out.println("enter first number");
        no1=sobj.nextInt();

        System.out.println("enter second number");
        no2=sobj.nextInt();
        
        ans=no1/no2;     //exception prone code

        System.out.println("Division is:"+ans);
    }
}

import java.util.Scanner;

class Demo
{
    public static int division(int no1,int no2)
    {
        return no1/no2;
    }
}

public class ExceptionDemo3 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int ans=0,no1=0,no2=0;

        System.out.println("enter first number");
        no1=sobj.nextInt();

        System.out.println("enter second number");
        no2=sobj.nextInt();
        
        ans=Demo.division(no1, no2);    //exception prone code

        System.out.println("Division is:"+ans);
    }
}

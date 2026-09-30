import java.util.Scanner;
public class ExceptionDemo2X 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int Arr[]={11,21,51,101,111};
        int index=0;

        try
        {
            System.out.println("Enter the index");
            index=sobj.nextInt();

            System.out.println("Element is"+Arr[index]);
        }
        catch(ArrayIndexOutOfBoundsException aiobj)
        {
            System.out.println("Exception occured: "+aiobj);
        }

        System.out.println("end of main");
    }
}

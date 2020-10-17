import java.util.*;
public class Main
{
    public static void main(String [] args)
    {
        System.out.println("Name-SHIVANI KUMARI");
        System.out.println("UID-18BCS2031");
        Scanner a=new Scanner(System.in);
        System.out.println("Enter two numbers");
        int x= a.nextInt();
        int y= a.nextInt();
        char n= a.next().charAt(0);
        double result;
        switch(n)
        {
            case '+':
                result =x+y;
                break;
                
                case '-' :
                    result= x-y;
                    break;
                    
                    case '*' :
                        result= x*y;
                        break;
}

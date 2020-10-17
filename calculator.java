import java.util.*;
public class Main
{
    public static void main(String [] args)
    {
        Scanner a=new Scanner(System.in);
        System.out.println("Enter two numbers");
        int x= a.nextInt();
        int y= a.nextInt();
        System.out.println("Select an operations(+,-,*,/) ");
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
                        
                        case '/' :
                            result= x/y;
                            break;
                            
                            default:
                            System.out.println("error: operation is not found");
                            
                            return;
        }
        System.out.println(x + " " + n + " " + y + "=" + result);
    }
}

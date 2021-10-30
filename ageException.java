import java.util.*;
public class Age {

	public static void main(String[] args) {
		  Scanner s = new Scanner(System.in);
		  System.out.print("Enter your age: ");
		  int age = s.nextInt();
		  
		  try {
		   if(age < 18 || age > 60) 
		    throw new AgeException("Invalid Age");
		   else
			    System.out.println("Valid age");
			  
		  }
		  catch (AgeException a) {
		   System.out.println(a);
		  }
		 }
}


class AgeException extends Exception {

	private static final long serialVersionUID = 1L;

public AgeException(String str) {
  System.out.println(str);
 }
}

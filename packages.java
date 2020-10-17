package p1;
class Geek
{
  void display()
  {
    System.out.println("Hello World!");
  }
}

package p2;
import p1.*;

class GeekNew
{
  public static void main(String args[])
  {
    
    Geeks obj = new Geek();

    obj.display();
  }
}

package p1;

class A
{
private void display()
  {
    System.out.println("this is private package");
  }
}

class B
{
public static void main(String args[])
  {
    A obj = new A();
    
    obj.display();
  }
}

//public packages
package p1;
public class A
{
public void display()
  {
    System.out.println("GeeksforGeeks");
  }
}
package p2;
import p1.*;
class B
{
  public static void main(String args[])
  {
    A obj = new A;
    obj.display();
  }
}


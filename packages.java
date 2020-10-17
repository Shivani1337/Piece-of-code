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


//single inheritance
class Animal{  
void eat(){
 System.out.println("eating...");
}  
}  
class Dog extends Animal{  
void bark(){
 System.out.println("barking...");
}  
}  
class TestInheritance{  
public static void main(String args[]){  
Dog d=new Dog();  
d.bark();  
d.eat();  
}
}  

//multiple inheritance
class Animal{  
void eat(){
 System.out.println("eating...");
}  
}  
class Dog extends Animal{  
void bark(){
 System.out.println("barking...");
}  
}  
class BabyDog extends Dog{  
void weep(){
 System.out.println("weeping...");
}  
}  
class TestInheritance2{  
public static void main(String args[]){  
BabyDog d=new BabyDog();  
d.weep();  
d.bark();  
15.	d.eat();  
16.	}}  


//Hierarchical Inheritance	
class one
{
public void print_geek()
{
System.out.println("Geeks");
}
	}
	
	class two extends one
	{	  public void print_for()
  {
    System.out.println("for");
	  }
	}
	
	class three extends one
{	  /............/
}
	
	// Derived class
	public class Main
	{
	  public static void main(String[] args)
	  {
	    three g = new three();
    g.print_geek();
	    two t = new two();
	    t.print_for();
    g.print_geek();
  }
	}

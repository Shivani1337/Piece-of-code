The main package: 
 
package newp; 
 
import newp.*;
import newp.newp2.*; 
public class main 
{ 
     public static void main(String[] args)
 {         
newp.NewClass o=new newp.NewClass();         
o.add();         
newp.newp2.NewClass1 i=new newp.newp2.NewClass1();         
i.add();      
 }     
 } 

Sub package of newp in java: 
 
package newp; 
public class NewClass 
{     
public void add()
{         
System.out.println("This is new package :");    
 }      
}
Another Subpackage for java: 
 
package newp.newp2; 
public class NewClass1 
{     
public void add()
{         
System.out.println("This is second package ");     
}      
}


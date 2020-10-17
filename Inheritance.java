public class Person
 {
     String name;
     int age, height;
    public static void main(String args[])
     {
         Student obj1=new Student();
         Teacher obj2=new Teacher();
         obj1.set("Joey", 17, 6);
         obj2.set("Koko", 22, 6);
        System.out.println("Student Details : \n" + "Name :"+ obj1.name +"\nAge :"+ obj1.age + "\nHeight :" + obj1.height);
        System.out.println("Teacher Details : \n" + "Name :"+ obj2.name +"\nAge :"+ obj2.age + "\nHeight :" + obj2.height);
    }
}
class Student extends Person
{
    public void set(String s, int a, int h)
    {
        name=s;
        age=a;
        height=h;

    }
}
class Teacher extends Person
{
    public void set(String s, int a, int h)
    {
        name=s;
        age=a;
        height=h;
    }
}

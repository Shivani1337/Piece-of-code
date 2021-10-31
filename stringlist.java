import java.util.*;

public class Strlist {

	public static void main(String[] args) {
		ArrayList<String> obj = new ArrayList<String>();
		Scanner sc = new Scanner(System.in);
		
		while(true) {
			System.out.println("Choose any option \n");
			System.out.println("1.Insert: ");
			System.out.println("2.Search: ");
			System.out.println("3.Delete: ");
			System.out.println("4.Display: ");
			System.out.println("5.Exit: ");
			
			int input = sc.nextInt();
			
			if(input==1) {
				System.out.println("Add Item: ");
				String item = sc.next();
				obj.add(item);
			}
			else if(input==2) {
				System.out.println("Enter Item you want to Search: ");
				String sItem = sc.next();
				for(String element : obj) {
					if(element.contains(sItem)) {
						System.out.println("Item found: " + sItem);
					}else {
						System.out.println("Not found ");
					}
				}
			}
			else if(input==3) {
				System.out.println("Delete the Element: ");
				String dItem = sc.next();
				obj.remove(dItem);
			}
			else if(input==4) {
				System.out.println("Elements: ");
				for(int i = 0 ; i<obj.size(); i++) {
					System.out.println(obj.get(i));
				}
			}
			else if(input==5) {
				break;
			}
			else {
				System.out.println("Please select valid option");
				break;
			}

		}
		sc.close();
	}
}

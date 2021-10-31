import java.io.*;
public class EmployeeManagement {
	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String fileName = "E://emp.txt";
		int c;
		do {
			System.out.println("1. Add an Employee");
			System.out.println("2. Display All");
			System.out.println("3. Exit");
			System.out.println("Enter your choice: ");
			c = Integer.parseInt(br.readLine());
			
			switch(c) {
			case 1:
				BufferedWriter wr = new BufferedWriter(new FileWriter(fileName, true));
				
				System.out.println("Enter Employee Id");
				String id = br.readLine();
				wr.append("\n");
				wr.append(' ');
				wr.append(id);
				
				System.out.println("Enter Employee Name");
				String name = br.readLine();
				wr.append("\n");
				wr.append(' ');
				wr.append(name);
				
				System.out.println("Enter Employee Age");
				String age = br.readLine();
				wr.append("\n");
				wr.append(' ');
				wr.append(age);
				
				System.out.println("Enter Employee Salary");
				String salary = br.readLine();
				wr.append("\n");
				wr.append(' ');
				wr.append(salary);
				wr.close();
				break;
				
			case 2:
				FileReader fr = new FileReader("E://emp.txt");
				int ch;
				System.out.println("---------------REPORT-------------------");
				while((ch = fr.read())!= -1)
				System.out.print((char)ch);
				System.out.println("\n\n----------------END OF REPORT------------------");
				fr.close();
				break;
			}
		}
			while(c!=3);
	}
}

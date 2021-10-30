import java.util.*;
public class ExpHash {
	public static void main(String[] args) {
		HashMap<String, ArrayList<Integer>> mp = new HashMap<String, ArrayList<Integer>>();
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the number of cards: ");
		int n = sc.nextInt();
		
		for(int i=0;i<n;++i)
		{
			System.out.println("Enter Card No. " + (i+1));
			String name = sc.next();
			int x = sc.nextInt();
			
			if(mp.get(name) == null)
			{
			
              mp.put(name, new ArrayList<Integer>());
			}
			
			mp.get(name).add(x);
		}
		sc.close();
		
		System.out.println("Distinct symbols: ");
		Iterator<String> it = mp.keySet().iterator();

		while(it.hasNext())
		{
			System.out.print(it.next() + " ");
		}
		it = mp.keySet().iterator();
		System.out.println();
		
		while(it.hasNext())
		{
			String key = it.next();
			int sum = 0;
			System.out.println("Cards in "+ key + " symbol ");
			ArrayList<Integer> cards = mp.get(key);
			for(int i: cards)
			{
				System.out.println(key + " " + i);
				sum += i;
			}
			System.out.println("Number of cards: " + cards.size());
			System.out.println("Sum of card numbers: " + sum);
		}
	}
}

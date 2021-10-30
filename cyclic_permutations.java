

public class GFG{
	
	static void compute_z(String s, int z[])
	{
		int l = 0, r = 0;
		int n = s.length();
		for (int i = 1; i <= n - 1; i++) {
			if (i > r) {
				l = i;
				r = i;
				while (r < n && s.charAt(r - l) == s.charAt(r))
					r++;
				z[i] = r - l;
				r--;
			}
			else {
				int k = i - l;
				if (z[k] < r - i + 1) {
					z[i] = z[k];
				}
				else {
					l = i;
					while (r < n && s.charAt(r - l) == s.charAt(r))
						r++;
					z[i] = r - l;
					r--;
				}
			}
		}
	}
	
	static int countPermutation(String a, String b)
	{
		
		b = b + b;
		b = b.substring(0, b.length() - 1);
	
		
		int ans = 0;
		String s = a + "$" + b;
		int n = s.length();
	
		
		int z[] = new int[n];
		compute_z(s, z);
	
		for (int i = 1; i <= n - 1; i++) {
	
			// pattern occurs at index i since
			// z value of i equals pattern length
			if (z[i] == a.length())
				ans++;
		}
		return ans;
	}
	
	
	
	public static void main(String []args){
		
			String a = "101";
			String b = "101";
			System.out.println(countPermutation(a, b)) ;
	}
	
}


#include <bits/stdc++.h>
using namespace std;

void compute_z(string s, int z[])
{
	int l = 0, r = 0;
	int n = s.length();
	for (int i = 1; i <= n - 1; i++) {
		if (i > r) {
			l = i, r = i;
			while (r < n && s[r - l] == s[r])
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
				while (r < n && s[r - l] == s[r])
					r++;
				z[i] = r - l;
				r--;
			}
		}
	}
}

int countPermutation(string a, string b)
{
	// concatenate b with b
	b = b + b;

	// new b now contains all the cyclic
	// permutations of old b as it's sub-strings
	b = b.substr(0, b.size() - 1);

	// concatenate pattern with text
	int ans = 0;
	string s = a + "$" + b;
	int n = s.length();

	
	int z[n];
	compute_z(s, z);

	for (int i = 1; i <= n - 1; i++) {

		// pattern occurs at index i since
		// z value of i equals pattern length
		if (z[i] == a.length())
			ans++;
	}
	return ans;
}


int main()
{
	string a = "101";
	string b = "101";

	cout << countPermutation(a, b) << endl;

	return 0;
}

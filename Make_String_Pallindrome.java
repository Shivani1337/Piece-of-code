
class MainClass
{


static boolean isPalindrome(char []str)
{
	int len = str.length;

	
	if (len == 1)
		return true;

	
	int ptr1 = 0;
	
	
	int ptr2 = len-1;

	while (ptr2 >= ptr1)
	{
		if (str[ptr1] != str[ptr2])
			return false;
		ptr1++;
		ptr2--;
	}

	return true;
}


static int noOfAppends(String s)
{
	if (isPalindrome(s.toCharArray()))
		return 0;

	s=s.substring(1);

	return 1 + noOfAppends(s);
}

// Driver code
public static void main(String arr[])
{
	String s = "abede";
	System.out.printf("%d\n", noOfAppends(s));
}
}



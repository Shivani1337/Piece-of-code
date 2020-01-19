n1=int(input("Enter a number:"))
temp=n1
rev=0
while(n1>0):
    n2=n1%10
    rev=rev*10+n2
    n1=n1//10
if(temp==rev):
    print("The number is palindrome")
else:
    print("Not a palindrome")

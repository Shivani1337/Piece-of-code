n=int(input("Enter the number of terms : "))
n1, n2 = 0, 1
count=0
if n<=0:
   print("Please enter a positive number")
elif n==1:
   print("Fibonacci sequence of",n,":")
   print(n1)
else:
   print("Fibonacci sequence:")
   while count<n:
       print(n1)
       num= n1 + n2
       n1 = n2
       n2 = num
       count += 1

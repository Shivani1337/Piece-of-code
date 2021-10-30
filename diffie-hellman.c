#include<stdio.h>
#include<math.h>
long long int power(long long int a, long long int b,long long int P)
{ 
    if (b == 1)
      return a;
    else
    return (((long long int)pow(a, b)) % P);
}

 int main()
{
    long long int P, G, x, a, y, b, ka, kb; 
    P = 20; 
    printf("The value of P : %lld\n", P); 
    G = 4; 
    printf("The value of G : %lld\n\n", G); 
    a = 9; 
    printf("The private key for NASA is : %lld\n", a);
    x = power(G, a, P); 
    b = 2; 
    printf("The private key for ISRO is : %lld\n\n", b);
    y = power(G, b, P); 
    ka = power(y, a, P); 
    kb = power(x, b, P);    
    printf("The secret key for NASA is : %lld\n", ka);
    printf("The secret Key for ISRO is : %lld\n", kb);
    return 0;
}

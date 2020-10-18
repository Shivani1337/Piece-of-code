#include <stdio.h>
void findFrequency(int A[], int n)
{
  int freq[n];

  for (int i = 0; i < n; i++)
    freq[i] = 0;

  for (int i = 0; i < n; i++)
    freq[A[i]]++;

  for (int i = 0; i < n; i++)
    if (freq[i])

      printf("%d appears %d times\n", i, freq[i]);
}

int main(void)
{
  int A[] = { 1,1,3,3,3,2,2,2,2,3,3,2,1,2,2,2 };

  int n = sizeof(A) / sizeof(A[0]);

  findFrequency(A, n);

  return 0;
}

//bubble sort
#include <iostream>
using namespace std;
int main()
{
 int A[20],n, temp, flag=0;
 cout<<"Enter the size of the array: ";
 cin>>n;
 cout<<"Enter the elements of the array: ";
 for(int i=0; i<n; i++)
  cin>>A[i];
 cout<<"Bubble Sorting starts...";
 for(int i=n-1; i>=1; i--)
 {
   for(int j=0; j<i; j++)
   {
    if(A[j]>A[j+1])
    {
      temp=A[j];
      A[j]=A[j+1];
      A[j+1]=temp;
      flag=1;
    }
    if(flag==0)
      break;
  }
 }
 cout<<"\nArray after bubble sorting is: ";
 for(int i=0; i<n; i++)
   cout<<A[i]<<" ";
}

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


//selection sort
#include <iostream>
using namespace std;
int main()
{
 int A[20],n, temp;
 cout<<"Enter the size of array: ";
 cin>>n;
 cout<<"Enter the elements of array: ";
 for(int i=0; i<n; i++)
   cin>>A[i];

 for(int i=0; i<n-1; i++)
 {
   int min=A[i];
   int loc=i;
   for(int j=i+1; j<n; j++)
   {
     if(A[j]<min)
     {
       loc=j;
       min=A[j];
     }
     if(min!=A[i])
     {
       temp=A[i];
       A[i]=A[loc];
       A[loc]=temp;
     }
   }
 }
 cout<<"Array after selection sorting is: ";
 for(int i=0; i<n; i++)
   cout<<A[i]<<" ";
}

#include <iostream>
using namespace std;
int main()
{
 int A[20], temp, n, j;
 cout<<"Enter the size of the array: ";
 cin>>n;
 cout<<"Enter the elements of the array: ";
 for(int i=0; i<n; i++)
 {
   cin>>A[i];
 }
 cout<<"\nArray after insertion sorting is: ";
 for(int i=1; i<=n-1; i++)
 {
   temp= A[i];
   j=i-1;
   while(j>=0 && A[j]>temp)
   {
     A[j+1]=A[j];
     j--;
   }
   A[j+1]=temp;
 }
 for(int i=0; i<n; i++)
   cout<<A[i]<<" ";
}

//merge sort
#include <iostream>
using namespace std;
void Merge(int *a, int low, int high, int mid)
{
  int i, j, k, temp[high-low+1];
  i = low;
  k = 0;
  j = mid + 1;
  while (i <= mid && j <= high)
  {
    if (a[i] < a[j])
    {
      temp[k] = a[i];
      k++;
      i++;
    }
    else
    {
      temp[k] = a[j];
      k++;
      j++;
    }
  }
  while (i <= mid)
  {
    temp[k] = a[i];
    k++;
    i++;
  }
  while (j <= high)
  {
    temp[k] = a[j];
    k++;
    j++;
  }
  for (i = low; i <= high; i++)
  {
    a[i] = temp[i-low];
  }
}
void MergeSort(int *a, int low, int high)
{
  int mid;
  if (low < high)
  {
    mid=(low+high)/2;
            MergeSort(a, low, mid);
    MergeSort(a, mid+1, high);
    Merge(a, low, high, mid);
  }
}
int main()
{
  int n, i;
  cout<<"\nEnter the number of data element to be sorted: ";
  cin>>n;
  int arr[n];
  for(i = 0; i < n; i++)
  {
    cout<<"Enter element "<<i+1<<": ";
    cin>>arr[i];
  }
  MergeSort(arr, 0, n-1);
  cout<<"\nSorted Data ";
  for (i = 0; i < n; i++)
       cout<<"->"<<arr[i];
  return 0;
}


//quick sort

#include <iostream>
 
using namespace std;
 
void quick_sort(int[],int,int);
int partition(int[],int,int);
 
int main()
{
    int a[50],n,i;
    cout<<"How many elements?";
    cin>>n;
    cout<<"\nEnter array elements:";
    
    for(i=0;i<n;i++)
        cin>>a[i];
        
    quick_sort(a,0,n-1);
    cout<<"\nArray after sorting:";
    
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    
    return 0;        
}
 
    void quick_sort(int a[],int l,int u)
{
       int j;
      if(l<u)
    {  
        j=partition(a,l,u);
        quick_sort(a,l,j-1);
        quick_sort(a,j+1,u);
    }
}
 
     int partition(int a[],int l,int u)
{
      int v,i,j,temp;
      v=a[l];
      i=l;
      j=u+1;
    
        do
    {
        do
            i++;
            
        while(a[i]<v&&i<=u);
        
           do
              j--;
          while(v<a[j]);
        
           if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
  while(i<j);
    
    a[l]=a[j];
    a[j]=v;
    
    return(j);
}

//heap sort

#include <iostream>

using namespace std;

void MaxHeapify(int a[], int i, int n)
{
	int j, temp;
	temp = a[i];
	j = 2*i;

 	while (j <= n)
	{
		if (j < n && a[j+1] > a[j])
		j = j+1;

		if (temp > a[j])
			break;

		else if (temp <= a[j])
		{
			a[j/2] = a[j];
			j = 2*j;
		}
	}
	a[j/2] = temp;
	return;
}
void HeapSort(int a[], int n)
{
	int i, temp;
	for (i = n; i >= 2; i--)
	{

		temp = a[i];
		a[i] = a[1];
		a[1] = temp;

		MaxHeapify(a, 1, i - 1);
	}
}
void Build_MaxHeap(int a[], int n)
{
	int i;
	for(i = n/2; i >= 1; i--)
		MaxHeapify(a, i, n);
}
int main()
{
	int n, i;
	cout<<"\nEnter the number of data element to be sorted: ";
	cin>>n;
	n++;
	int arr[n];
	for(i = 1; i < n; i++)
	{
		cout<<"Enter element "<<i<<": ";
		cin>>arr[i];
	}

	Build_MaxHeap(arr, n-1);
	HeapSort(arr, n-1);

	cout<<"\nSorted Data ";

	for (i = 1; i < n; i++)
		cout<<"->"<<arr[i];

	return 0;
}

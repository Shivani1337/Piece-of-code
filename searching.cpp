//linear search
#include<iostream>
using namespace std;
int main ()
{ 
    int i,j,n,a[100],num,count=-1; 
       cout<<"Enter the size of array"<<endl;
       cin>>n; 
       cout<<"Enter the Elements of array"<<endl;  
       for(i=0;i<n;i++)     
       {        
           cin>>a[i]; 
       }   
    cout<<"Enter the element you want to search"<<endl;  
    cin>>num;  
    for(i=0;i<n;i++)     {      
        if(a[i]==num)         {             
            cout<<"Position of element: "<<i+1<<endl;        
            count++;    
            } 
    }     
    if(count==0)
    { 
        cout<<"This number is unique"<<endl;    
        } 
        else    
        { 
        if(count==-1)
        { 
        cout<<"no such number("<<endl;       
        } 
            else        
            { 
            cout<<"This number is repeating "<<count<<" times"<<endl;        
            } 
        }
}

//binary search
#include<iostream>
using namespace std;
int main ()
{
	int n, i, a[50], s, f, l, m;
	cout<<"Enter total number of elements:";
	cin>>n;
	cout<<"Enter "<<n<<" number:";
	for (i=0; i<n; i++)
	{
		cin>>a[i];
	}
	cout<<"Enter a number to find:";
	cin>>s;
	f = 0;
	l = n-1;
	m = (f+l)/2;
	while (f <= l)
	{
	if(a[m] < s)
		{
			f = m + 1;
		}
		else if(a[m] == s)
		{
			cout<<s<<" found at location "<<m+1<<"\n";
			break;
		}
		else
		{
			 l = m - 1;
		}
		m = (f + l)/2;
	}
	if(f > l)
	{
	cout<<"Not found! "<<s<<" is not present in the list.";
	}
}


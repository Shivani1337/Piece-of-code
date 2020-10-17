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
    cout<<"Enter the number you want to search"<<endl;  
    cin>>num;  
    for(i=0;i<n;i++)     {      
        if(a[i]==num)         {             
            cout<<"Position of element is  "<<i+1<<endl;        
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
        cout<<"NO such number("<<endl;       
        } 
            else        
            { 
            cout<<"This number is repeating "<<count<<" times"<<endl;        
            } 
        }
}

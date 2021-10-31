#include <iostream>
#include <vector>
using namespace std;

vector<int> rotateLeft(int d, vector<int> &arr1) {
  
  d=d%arr1.size();

  int n=arr1.size();
  vector<int> arr2 (n);

  for(int i=0; i<n-d; i++)
  {
    arr2[i] = arr1[d+i];
  }

  for(int i=n-d, j=0; i<n; i++,j++)
  {
    arr2[i]=arr1[j];
  }

  return arr2;  
}

int main() {
  vector<int> x={1,2,3,4};


  for(int i=0;i<x.size();i++)cout<<x[i]<<" ";
  cout<<endl<<endl;


 x=rotateLeft(1, x);
 
  for(int i=0;i<x.size();i++)cout<<x[i]<<" ";

}


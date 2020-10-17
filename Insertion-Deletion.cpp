#include <iostream>
using namespace std;
 int a[1000];
void display(int n)
{
    for(int i = 0; i<n; i++)
    cout << a[i] << " ";

    cout << endl;
}

int insert(int pos, int x, int n)
{
    for(int i = n; i>pos; i--)
    a[i] = a[i-1];
    a[pos] = x;
    return ++n;
}
int main()
 {
    int n;
    cout << "Enter the number of elements to be stored in array : \n";
    cin >> n;
    cout << "Enter the elements of the array:\n";
    for(int i =0; i<n; i++)
        cin >> a[i];

       cout << "select \n";
       cout << "Press 1 for displaying the array:\n";
       cout << "Press 2 for inserting an element to the array:\n";
       
        int choice = 0;
        cin >> choice;

	int pos, x;

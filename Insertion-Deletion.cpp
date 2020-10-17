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

int deletion(int pos, int n)
{
    for(int i = pos; i<n; i++)
    a[i] = a[i+1];

    return --n;
}

int search(int n, int x)
{
    for(int i = 0; i<n; i++)
        if(a[i] == x)
            return i;

    return -1;
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
       cout << "Press 3 for delelting an element from the array:\n";
       cout << "Press 4 for searching an element in the array:\n";
        int choice = 0;
        cin >> choice;

	int pos, x;

        switch(choice)
        {
         case 1:
                cout << "The entered array are: \n";
                display(n);
                break;
        case 2:
                cout << "Enter the position and the element value to be inserted:\n";
                cin >> pos >> x;
                    n = insert(pos, x, n);
                    cout << "The array after insertion are: \n";
                    display(n);
                    break;
        case 3:
                cout << "Enter the position where the element has to be deleted:\n";
                cin >> pos;
                    n = deletion(pos,n);
                    cout << "The array after deletion are: \n";
                    display(n);
                break;
        case 4:
                cout << "Enter the element to be searched in the array:\n";
                cin >> x;
                    pos = search(n, x);
                if(pos == -1)
                cout << "Not present \n";
                else
                cout << "present at position " << pos << endl;
                break;
        default :
                cout << "error";
        }
        return 0;
}

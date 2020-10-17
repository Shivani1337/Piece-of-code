#include<iostream>
using namespace std;
#define MAX 10

class Queue
{
  public:
   int Q[MAX];
   int rear,front;
   Queue()
   {
     rear=front=0;
   }
  void Insert()
 {
   if(rear==MAX)
   {
     cout<<"\n Queue OVERFLOW ";
   }
 else
 {
   cout<<"\n Enter the number : ";
   cin>>Q[rear++];
   cout<<"\n Element got Inserted \n";
 }
  }
   void Delete()
   {
        if(front==0&&rear==0)
        {
          cout<<"\n Queue UNDERFLOW \n";
        }
     else
       cout<<"\n Element "<<Q[front++]<<" got Deleted \n";
   }
        void show()
      {
        if(front==0&&rear==0)
        {
            cout<<"\n Queue UNDERFLOW \n";
        }
         else
       {
          cout<<"\n Elements are : \n\n";
          int i=front;
          while(i<rear)
          {
            cout<<Q[i++]<<"\n";
          }
        }
      }
};

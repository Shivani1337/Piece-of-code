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
class CircularQueue
{
  public:
   int Q[MAX];
   int rear,front;
   CircularQueue()
   {
     rear=front=-1;
   }
 bool isFull()
 {
        if(front == 0 && rear == MAX - 1)
        {
            return true;
        }
        if(front == rear + 1) {
            return true;
        }
        return false;
    }

    bool isEmpty(){
        if(front == -1)
             return true;
        else
            return false;
    }
    void enQueue(){
        if(isFull()){
            cout << "Queue OVERFLOW\n";
        } else {
            int element;
            if(front == -1)
                front = 0;
            rear = (rear + 1) % MAX;
            cout<<"\n\n Enter the element :";
            cin>>element;
            Q[rear] = element;
            cout << endl << "Element " << element <<" got Inserted ";
        }
    }
    void deQueue()
    {
        int element;
        if(isEmpty())
            {
            cout << "Queue UNDERFLOW" << endl;
        }
        else
            {
            element = Q[front];
            if(front == rear)
            {
                front = -1;
                rear = -1;
            } 
            else {
                front=(front+1) % MAX;
            }
          cout<<"\n\n Element "<<element <<" got deleted ";
        }
    }
    void display()
    {
        int i;
        if(isEmpty()) {
            cout << endl << " Queue UNDERFLOW" << endl;
        }
        else
        {
            cout << "\n\nFront -> " << front<<"\n";
            cout << "Elements -> ";
            for(i=front; i!=rear;i=(i+1)%MAX)
                cout << Q[i]<<" ";
            cout << Q[i];
            cout << endl << "Rear -> " << rear<<"\n\n";
        }
    }
};
    int main()
    {
          Queue q;
         CircularQueue q1;   
    cout<<"Enter 1 for operation in Queue:\n";
    cout<<"Enter 2 for Operation in Circular Queue:\n";
      int ch;
      cout<<"Enter your choice:\n";
      cin>>ch;
      switch(ch)
      {
        case 1:
      int c;
       while(1)
     {
      cout<<" 1- > INSERT \n";
      cout<<" 2- > DELETE \n";
      cout<<" 3- > DISPLAY\n";
      cin>>c;
      switch(c)
      {
        case 1: q.Insert();
                break;
        case 2: q.Delete();
                break;
        case 3: q.show();
                break;
        default: cout<<" Invalid key !! ";
      }
     }
     case 2:
      
       int c1;
       while(1)
     {
      cout<<" \n 1- > INSERT \n";
      cout<<" 2- > DELETE \n";
      cout<<" 3- > DISPLAY\n";
      cin>>c1;
      switch(c1)
      {
        case 1: q1.enQueue();
                break;
        case 2: q1.deQueue();
                break;
        case 3: q1.display();
                break;
        default: cout<<" Invalid key !! ";
      }
     }
 }
    return 0;
   }

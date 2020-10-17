#include <iostream>
using namespace std;
class node {
 public:
  int data;
  node *next;
};

node* front = NULL;
node* rear = NULL;
node* temp;
void Insert() {
  int val;
  cout<<"Insert the element in queue : "<<endl;
  cin>>val;
  if (rear == NULL) {
     rear = (struct node *)malloc(sizeof(struct node));
     rear->next = NULL;
     rear->data = val;
     front = rear;
  } else {
     temp=(struct node *)malloc(sizeof(struct node));
     rear->next = temp;
     temp->data = val;
     temp->next = NULL;
     rear = temp;
  }
}

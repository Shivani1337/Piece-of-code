#include <stdio.h>
#include <stdlib.h>

typedef struct NODE{
    struct NODE *back;
    int info;
    struct NODE *next;
}node;
typedef struct HEAD_NODE{
    int no_of_nodes;
    struct NODE *next;
}head;

void add_node(head*,int);
void show_list(head *);
void search_node (head* ,int);
void del_list(head *,int );

int main(){
    head *list;
    list=(head*)malloc(sizeof(head));
    list->no_of_nodes=0;
    list->next=NULL;

    int choice=-1,info=0;
    
    printf("\nLinked list program");
    printf("\nLinked list created waiting for instructions...");
    printf("\n----------------------------------------");
    printf("\n----------------------------------------\n");

    while(1)
    {
        printf("\n1. Insert a new element");
        printf("\n2. Delete an existing element ");
        printf("\n3. Search an element ");
        printf("\n4. Display all the elements ");
        printf("\n0. Exit the program");
        printf("\nENTER YOUR CHOICE : "); 
        if(scanf("%d",&choice)==0) break;     //if char is entered switch will run till infinity bcz of buffer
       
        switch  (choice)
        {
        case 1:printf("\nEnter the info for node:");
                scanf("%d",&info);
                add_node(list,info);
                break;
        case 2:printf("\nEnter the info for Deleting the node:");
                scanf("%d",&info);
                del_list(list,info);
                break;
        case 3:printf("\nEnter the info for  searching node:");
                scanf("%d",&info);
                search_node(list,info);
                break;
        case 4:show_list(list);
                break;
        case 0:printf("\n\n----Program Exited----");
                exit(0);

        default: printf("\ninvalid choice select b/w 0 to 4\n");
        }
    }
    return 0;
}

void add_node(head *lp,int x){
    node *p,*r,*s;

    p=(node*)malloc(sizeof(node));           //CREATING NEW NODE PONTED BY P.
    if(p==NULL){printf("Memory error!!!!!!");exit(0);}
    p->back=NULL;
    p->info=x;
    p->next=NULL;

    if(lp->no_of_nodes==0)          //LIST IS EMPTY
    {
        lp->next=p;
    }
      else
    {
        r=s=lp->next;
        while(s!=NULL&&s->info<x)
        {
            r=s;
            s=s->next;
        }
        if(s==r)
        {   p->next=s;
            lp->next=p;
            s->back=p;
        }
        else
        {
            if(s==NULL)
            {
                r->next=p;
                p->back=r;
            }
            else
            {
                r->next=p;
                p->back=r;
                p->next=s->next;
                (s->next)->back=p;
            }}}

 (lp->no_of_nodes)++;

}

void show_list(head *lp){
    node *s=lp->next;
    if(s==NULL){printf("Empty list");}
    else{
    while(s!=NULL)
    {
        printf(" %d",s->info);
        s=s->next;
    }}}

void del_list(head *lp,int x){
    node *s=lp->next;
    if(s==NULL){printf("Empty list");}
    else
    {   node *r;
        r=s=lp->next;
        while(s!=NULL&&s->info!=x)
        {
            r=s;
            s=s->next;
        }
        if(s==NULL){printf("NODE NOT FOUND");}
        else
        {   if(r==s)
            {   lp->next=s->next;
                free(s);  }
            else
            {
                r->next=s->next;
                free(s);
            }}}

}

void search_node (head* lp,int x)
{   if(lp->next==NULL){printf("\nlist is empty\n");}
    else
    {    node *s;
         s=lp->next;
         int pos=1;
          while(s!=NULL && s->info!=x)
        {   pos++;
            s=s->next;}
         if(s==NULL){printf("\nNode not found\n");}
         else
         {   printf("\nNode found at position %d\n",pos);}
    }}

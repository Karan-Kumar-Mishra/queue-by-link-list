#include<iostream>
using namespace std ;
//queue by link list
class node
{
public:
    int info;
    node *next;
};
node* create(int data)
{
    node *ptr=new node;
    ptr->info=data;
    ptr->next=NULL;
    return ptr;
}
void remove(node *head)
{
    head->next=head->next->next;
}
void insert(node *head,int data)
{
    node *ptr=head->next;
    while(ptr->next!=NULL)
    {

        ptr=ptr->next;
    }
    node *p1=create(data);
    p1->next=NULL;
    ptr->next=p1;
}
void display(node *head)
{
    node *ptr=head->next;
    while(ptr!=NULL)
    {
        cout<<" "<<ptr->info;
        ptr=ptr->next;
    }
}
int main()
{
    node *head,*p1,*p2,*p3,*p4;
    head=new node;
    p1=create(10);
    p2=create(20);
    p3=create(30);
    p4=create(40);
    head->next=p1;
    p1->next=p2;
    p2->next=p3;
    p3->next=p4;
    cout<<"queue by link list: "<<endl;
    cout<<endl;
    display(head);
    cout<<endl<<endl;
    remove(head);
    cout<<"after remove element: "<<endl;
    cout<<endl;
    display(head);
    cout<<endl<<endl;
    insert(head,50);
    cout<<"after insert element: "<<endl;
    cout<<endl;
    display(head);
    cout<<endl<<endl;
    return 0;
}
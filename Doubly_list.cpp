#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct node{
    int data;
    node* next;
    node* prev;
    node(int val)
    {
        data=val;
        next=nullptr;
        prev=nullptr;
    }
};
node* head=nullptr;
void insert_at_front()
{
    int d;
    cin>>d;
    node* newnode=new node(d);
   if(head==nullptr)
   {
       head=newnode;
   }
   else
   {
      newnode->next=head;
      head->prev=newnode;
      head=newnode;
   }
}
void insert_at_end()
{
   int d;
   cin>>d;
   node* newnode=new node(d);
   if(head==nullptr)
   {
       head=newnode;
   }
   else
   {
    node* ptr=head;
    while(ptr->next!=nullptr)
    {
        ptr=ptr->next;
    }
     ptr->next=newnode;
     newnode->prev=ptr;
   }
}
void delete_front()
{
  if(head==nullptr)
  {
    cout<<"List is Empty"<<endl;
  }
  else if(head->next==nullptr)
  {
    node* ptr=head;
    head=nullptr;
    free(ptr);
  }
  else{
    node* ptr=head;
    head->next->prev=nullptr;
    head=head->next;
    free(ptr);
  }
}
void delete_end()
{
   if(head==nullptr)
  {
    cout<<"List is Empty"<<endl;
  }
  else if(head->next==nullptr)
  {
    node* ptr=head;
    head=nullptr;
    free(ptr);
  }
  else{
    node* ptr=head;
    while(ptr->next!=nullptr)
    {
        ptr=ptr->next;
    }
    ptr->prev->next=nullptr;
    free(ptr);
  }
}
void insert_at_pos()
{
   int pos_val;
   cin>>pos_val;
   int d;
   cin>>d;
   node* newnode=new node(d);
   
   node* ptr=head;
   while(ptr->data!=pos_val)
   {
    ptr=ptr->next;
   }
   ptr->next->prev=newnode;
   newnode->prev=ptr;
   newnode->next=ptr->next;
   ptr->next=newnode;
   

}
void display()
{
    node* ptr=head;
    while(ptr!=nullptr)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;

}
void count_element()
{
   node* ptr=head;
   int count=0;
    while(ptr!=nullptr)
    {
       count++;
        ptr=ptr->next;
    }
    cout<<count<<endl;
}
int main() {
    int choice;
   while(true)
    {
        cin>>choice;
        if(choice==0)
        {
            break;
        }
        switch(choice)
        {
            case 1: insert_at_front();
            break;
            case 2: insert_at_end();
            break;
            case 3: delete_front();
            break;
            case 4: delete_end();
            break;
            case 5: insert_at_pos();
            break;
            case 6: display();
            break;
            case 7: count_element();
            break;
            default : cout<<"Invalid Entry"<<endl;
            break;

        }

    }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
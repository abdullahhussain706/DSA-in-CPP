#include<iostream>
using namespace std;

struct node
{
	int data;
	node *next;
};

class circular_linked
{
	node *head,*curr;
	public:
		circular_linked()
		{
			head=NULL;
			curr=NULL;
		}
		void insert_at_end(int data)
		{
			node *newnode=new node;
			newnode->data=data;
			newnode->next=NULL;
			if(head==NULL)
			{
				head=newnode;
				head->next=head;
			}
			curr=head;
			while(curr->next!=head)
			{
				curr=curr->next;
			}
			
			curr->next=newnode;
			newnode->next=head;
		}
		
		
		void insert_at_start(int data)
		{
			node *newnode=new node;
			newnode->data=data;
			newnode->next=NULL;
			if(head==NULL)
			{
				head=newnode;
				head->next=head;
			}
			curr=head;
			while(curr->next!=head)
			{
				curr=curr->next;
			}
			curr->next=newnode;
			newnode->next=head;
			head=newnode;
		}
		
		void insert_at_specific(int data,int pos)
		{
			node *newnode=new node;
			newnode->data=data;
			newnode->next=NULL;
			
			if(pos==1)
			{
				node *curr = head;
		        while (curr->next != head) {
		            curr = curr->next;
		        }
		        curr->next = newnode;   // Last node points to the new node
		        newnode->next = head;   // New node points to the head
		        head = newnode;         // Update head to the new node
		        return;   
			}
			
			curr=head;
			int count=1;
			while(curr->next!=head && count!=pos-1)
			{
				curr=curr->next;
				count++;
			}
			
			if(curr==head)
			{
				cout<<"Out of Position.Adding at end.\n";
				curr->next=newnode;
				newnode->next=head;
			}
			else
			{
				newnode->next=curr->next;
				curr->next=newnode;
			}
		}
		
		void display()
		{
			curr=head;
			do
			{
				cout<<curr->data<<" ";
				curr=curr->next;
			}
			while(curr!=head);
		}
};

int main()
{
	circular_linked obj;
	obj.insert_at_end(45);
	obj.insert_at_end(4);
	obj.insert_at_end(5);
	obj.insert_at_end(6);
	obj.display();
	cout<<"\nAfter inserting at start:\t";
	obj.insert_at_start(7);
	obj.display();
	cout<<"\nAfter inserting at specific:\t";
	obj.insert_at_specific(8,1);
	obj.insert_at_specific(9,15);
	obj.display();
	
	return 0;
}

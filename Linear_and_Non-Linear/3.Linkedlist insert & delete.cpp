#include<iostream>
using namespace std;

struct node
{
	int data;
	node *next;
};
class linkedlist
{
	node *head,*curr;
	public:
		linkedlist()
		{
			head= NULL;
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
			}
			else
			{
				curr=head;
				while(curr->next!=NULL)
				{
					curr=curr->next;
				}
				curr->next=newnode;
			}
		}
		
		void insert_at_head(int data)
		{
			node *newnode=new node;
			newnode->data=data;
			newnode->next=NULL;

			curr=newnode;
			curr->next=head;
			head=curr;
		}
		
		void insert_at_specific(int data,int pos=-1)
		{
			node *temp=new node;
			temp->data=data;
			temp->next=NULL;
			if(pos==1)
			{
				temp->next=head;
				head=temp;
				return;
			}
			curr=head;
			int count=1;
			
			while(curr!=NULL && count!=pos-1)
			{
				curr=curr->next;
				count++;
			}
			if(curr==NULL)
			{
				if(head==NULL)
				{
					head=temp;
				}
				else
				{
					cout<<"Position is out of lenght of list.Adding at end."<<endl;
					curr=head;
					while(curr->next!=NULL)
					{
						curr=curr->next;
					}
					curr->next=temp;
				}
			}
			else
			{
				temp->next=curr->next;
				curr->next=temp;
			}
			
		}
		
		void delete_at_start()
		{
			node *temp;
			temp=head;
			head=head->next;
			delete temp;
		}
		
		
		void delete_at_end()
		{
			node *temp;
			curr=head;
			while(curr->next->next!=NULL)
			{
				curr=curr->next;
			}
			temp=curr->next;
			curr->next=NULL;
			delete temp;
		}
		
		void delete_at_specific(int pos)
		{
			node *temp;
			if(pos==1)
			{
				delete_at_start();
			}
			curr=head;
			int count=1;
			
			
			while(curr->next!=NULL && count!=pos-1)
			{
				curr=curr->next;
				count++;
			}
			if(curr->next==NULL)
			{
				cout<<"Out of Position!";
			}
			else
			{
				temp=curr->next;
				curr->next=curr->next->next;
				delete temp;
			}
		}
		
		void display()
		{
			curr=head;
			while(curr!=NULL)
			{
				cout<<curr->data<<" ";
				curr=curr->next;
				
			}
		}
};

int main()
{
	linkedlist obj;
	obj.insert_at_end(45);
	obj.insert_at_end(56);
	obj.display();
	cout<<"\nAfter inserting at head:\n";
	obj.insert_at_head(89);
	obj.insert_at_head(75);
	obj.display();
	cout<<"\nAdding at Specific Position:\n";
	obj.insert_at_specific(45,3);
	obj.insert_at_specific(100,5);
	obj.display();
	cout<<"\nAfter delete at start:\t";
	obj.delete_at_start();
	obj.display();
	obj.delete_at_end();
	cout<<"\nAfter deleting at Specific:\n";
	obj.delete_at_specific(3);
	obj.delete_at_specific(1);
	obj.display();
	return 0;
}

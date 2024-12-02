#include<iostream>
using namespace std;

struct node
{
	int data;
	node *next;
};
class linklist
{
	node *head,*curr,*temp;
	public:
	linklist()
	{
		head=NULL;
		curr=NULL;
	}
	
	// member function to create linked list and it will insert a node at end
	void insert(int n)
	{
		node *newnode = new node;
		newnode->data=n;
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
	
		// member function to delete specific node
	void deletenode(int num)
	{
		curr=head;
		temp=NULL;
		
		// check if node at head
		if(head!=NULL && head->data == num)
		{
			temp=curr;
			head=curr->next;
			temp->next=NULL;
			delete temp;
			cout<<"Number found & deleted.";
			return;
		}
		
		// traverse the list to find node
		while(curr!=NULL && curr->next !=NULL && curr->next->data != num)
		{
			curr=curr->next;
		}
		
		if(curr==NULL || curr->next == NULL)
		{
			cout<<"Number Not found.";
		}
		else
		{
		temp=curr->next;
		curr->next=temp->next;
		delete temp;
		cout<<"\nNumber Found & deleted.";
		}
	}
	
	void print()
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
	linklist obj;
	obj.insert(5);
	obj.insert(56);
	obj.insert(65);
	obj.insert(47);
	obj.print();
	cout<<"\nPrint after delete."<<endl;
	obj.deletenode(5);
	obj.deletenode(47);
	obj.print();
	return 0;
}

#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node *next;
};
class Link
{
	Node *head,*curr;
	public:
	Link()
	{
		head=curr=NULL;
		
	}
	void insert_head(int n)
	{
		Node *temp =new Node;
		temp->data=n;
		temp->next=NULL;
		temp->next=head;
		head=temp;
	
	}
	void insert(int n)
	{
		Node  *newnode;
		newnode = new Node;
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
	void add(int num,int pos)
	{
		
			Node *temp;
			temp = new Node;
			temp->data=num;
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
				
				cout<<"Position is out of lenght of list.Adding at end.";
				curr= head;
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
	
	void insert_tail(int n)
	{
		curr=head;
		Node *newnode=new Node;
		newnode->data=n;
		newnode->next=NULL;
		while(curr->next!=NULL)
		{
			curr=curr->next;
		}
		curr->next=newnode;
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
	Link obj;
	cout<<"Enter LiNKEDLIST Data: "<<endl;
	char ch; int i,pos;
	while(true)
	{
		cout<<"Enter Data: ";
		cin>>i;
		obj.insert(i);
		
		cout<<"Enter Your Choice(y for yes n for No)";
		cin>>ch;
		if(ch=='n')
		break;
	}
	
	obj.insert_head(5);
	cout<<"Enter data and position where you want to insert: ";
	cin>>i>>pos;
	obj.add(i,pos);
	
	obj.insert_tail(45);
	obj.display();
	return 0;
}

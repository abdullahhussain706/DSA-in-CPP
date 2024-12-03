#include<iostream>
using namespace std;

struct node
{
	int data;
	node *next;
};

class stack
{
	node *top,*curr;
	public:
		stack()
		{
			top=NULL;
			curr=NULL;
		}
		
		void push(int data)
		{
			node *newnode=new node;
			newnode->data=data;
			newnode->next=NULL;
			
			if(top==NULL)
			{
				top=newnode;
			}
			else
			{
				newnode->next=top;
				top=newnode;
			}
		}
		
		void pop()
		{
			cout<<"\nPop data:\t"<<top->data;
			node *temp=top;
			top=top->next;
			temp->next=NULL;
			delete temp;
		}
		
		void display()
		{
			curr=top;
			while(curr!=NULL)
			{
				cout<<curr->data<<" ";
				curr=curr->next;
			}
		}
		
};
int main()
{
	stack obj;
	obj.push(78);
	obj.push(14);
	obj.push(02);
	obj.push(0);
	obj.display();
	
	obj.pop();
	obj.pop();
	cout<<"\nAfter pop:";
	obj.display();
	
	return 0;
}

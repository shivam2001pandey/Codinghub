//Reversing a Linked List
#include<iostream>
using namespace std;
struct node{
	int data;
	node*link;
	
};
node*start=NULL;

void push(int);//Insert elements in the node
void reverse();//Reversing the node in the linked list
void print();//print the elements

int main(){
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	reverse();
	print();	
	return 0;
}

void push(int info)
{
	node*ptr=new node;
	ptr->data=info;
	ptr->link=NULL;
	if(start==NULL)//First Node
		start=ptr;
	else
	 {
		node*temp=start;
		while(temp->link!=NULL)
			temp=temp->link;
		temp->link=ptr;	
	 }	
}

void reverse()
{
	node*current,*prev,*next;
	prev=NULL;
	current=start;
	while(current!=NULL)
	{
		next=current->link;
		current->link=prev;
		prev=current;
		current=next;
	}
	start=prev;
}

void print()
{
	node*temp=start;
	cout<<"\n\n\t\t\t\t\n\n\n\n";
	while(temp->link!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->link;
	}
	cout<<temp->data;
}

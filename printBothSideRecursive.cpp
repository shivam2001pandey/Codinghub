//Wap to print the Linked List in forward and reverse order
#include<iostream>
using namespace std;
struct node{
	int data;
	node*link;
};

//Function Declaration
node* insert(node*,int);
void forwardPrint(node*);
void reversePrint(node*);
 
//main function
int main()
{
	node*start=NULL;
	start=insert(start,1);
	start=insert(start,2);
	start=insert(start,3);
	start=insert(start,4);
	start=insert(start,5);
	cout<<"\n Printing the Nodes in the Forward Direction\n";
	forwardPrint(start);
	cout<<"\nPrinting the Nodes in reverse Direction\n";
	reversePrint(start);
	return 0;
} 

//Function Definition
node* insert(node*start,int info){
	node*ptr=new node;
	ptr->data=info;
	ptr->link=NULL;
	if(start==NULL)
		start=ptr;
	else
	{
		node*temp=start;
		while(temp->link!=NULL)
			temp=temp->link;
		temp->link=ptr;		
	}	
	return start;
}

void forwardPrint(node*start){
	if(start==NULL)
		return;
	cout<<start->data<<"->";
	forwardPrint(start->link);
}

void reversePrint(node*start){
	if(start==NULL)
		return;
	reversePrint(start->link);
	cout<<start->data<<"->";	
}

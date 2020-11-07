//when inserting any node in array //

#include<bits/stdc++.h>
using namespace std;

#include "mutiple noded class.cpp"


node* takeinput()
{
	int data;
	cin>>data;
	node *head=NULL;
	while(data !=-1)
	{
		node *newnode=new node(data);
		//node n(data)//ye statically hai
		if(head==NULL)
		{
			head=newnode;
			}	
			else{
				node*temp =head;
				while(temp->next!=NULL)
				{
					temp=temp->next;
				}
				
				temp->next=newnode;
			}
			cin>>data;
		}
		return head;
}

node* inserto(node* head,int i,int data)
{
	node *newnode = new node(data);
	int count=0;
	node* temp=head;
	if(i==0)
	{
		newnode->next=head;
		head=newnode;
		
		return head;
	}
	while(temp!=NULL && count<i-1)
	{
		temp=temp->next;
		count++;
		
	}
	if(temp!=NULL)
	{
		node*a= temp->next;
		temp->next=newnode;
		newnode->next=a;
	}
	return head;
}

node *deleteo(node*head,int j)
{	int count=0;
	node* temp=head;

	while(temp!=NULL && count<j-1)
	{
		temp=temp->next;
		count++;
	}
	if(temp!=NULL)
	{
		node *a=temp->next;
		node *b=a->next;
		
		temp->next=b;
		delete a;
	}
	
	
	return head;
}

void print(node *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
}

int main()
	{
		node *head=takeinput();
		print(head);
		//int i,data;
		//cin>>i>>data;
		int j;
		cin>>j;
	//	inserto(head,i,data);
		deleteo(head,j);
		print(head);
	}

#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
};

int main()
{
	struct Node *head =NULL;
	struct Node *second =NULL;
	struct Node *third =NULL;
	
	head= (struct Node*)malloc(sizeof(struct Node));
	second= (struct Node*)malloc(sizeof(struct Node));
	third= (struct Node*)malloc(sizeof(struct Node));

	head->data=1;
	head->next= second;
	
	second->data=2;
	second->next=third;

	third->data=3;
	third->next=NULL;

	cout<<"address of head: "<<head<<"\n";
	cout<<"address of second node: "<<head->next<<"\n";
	cout<<"address of third node: "<<head->next->next<<"\n";

	cout<<"data inside head: "<<head->data<<"\n";
	cout<<"data inside second node: "<<second->data<<"\n";
	cout<<"data inside thrid node "<<third->data<<"\n";

	return 0;	
}


#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node* next;
};

struct Node*head;


void print(){
	struct Node *temp;
	temp = head;

	while(temp != NULL){
		printf("%d",temp->data);
		temp = temp -> next;
		printf(" ");
	}

	
}

void insert(int value){

	struct Node *temp = (struct Node*) malloc(sizeof(struct Node));
	temp -> data = value;
	temp -> next = head;
	head = temp;

}

int main()
{
	head = NULL;

	insert(1);
	insert(2);
	insert(3);

	print();
}


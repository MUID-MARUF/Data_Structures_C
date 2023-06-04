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

void insert (int value)
{
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    temp -> data = value;
    temp -> next = NULL;
 
    if(head == NULL){
        head = temp;
    }
 
    else{
        struct Node* t;
        t = head;
 
        while(t -> next != NULL){
            t = t -> next;
        }
 
        t -> next = temp;
    }
}

void delNode(int pos){

	if(pos == 1){

		struct Node * temp;
		temp = head;
		head = head -> next;
		free(temp);
	}

	else{

		struct Node * temp1;
		temp1 = head;

		for(int i = 1; i<pos-1 ; i++){

			temp1 = temp1->next;
		}

		struct Node * temp2;
		temp2 = temp1 -> next;
		temp1 -> next = temp2 -> next;
		free(temp2);
	}

}
 
int main()
{
	head = NULL;

	insert(10);
	insert(4);
	insert(3);
	insert(1);

	print();

	printf("\n");

	delNode(3);

	delNode(1);

	print();
}


#include<bits/stdc++.h>
using namespace std;
 
struct Node{
 
    int data;
    struct Node* next;
};
 
struct Node* head;
 
void print_ldl(){
 
    struct Node *temp;
    temp = head;
 
    while(temp != NULL){
        printf("%d",temp->data);
        temp = temp -> next;
 
        printf("\n");
    }
}
 
void insertt (int value)
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
 

void printReverse(Node* head){
	if(head==NULL){
		return;
	}

	printReverse(head->next);
	printf("%d\n",head->data);
}
 
int main()
{
    head = NULL;
 
    insertt(2);
    insertt(10);
    insertt(20);
    insertt(30);
 
 
 
    print_ldl();
 
}
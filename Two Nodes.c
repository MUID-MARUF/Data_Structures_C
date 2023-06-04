#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node* next;
};

struct Node* head;

int main()
{
	head = NULL;
	head = (struct Node*) malloc(sizeof(struct Node));

	head->data = 2;

	head->next = (struct Node*) malloc(sizeof(struct Node));

	head->next->data = 5;
	head->next->next =NULL;

}
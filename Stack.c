#include<bits/stdc++.h>
using namespace std;
 
#define MAXN 100

struct Stack{
	int top;
	int data[MAXN];
};

void push(Stack *s, int item)
{
	if(s->top < MAXN){
		s->data[s->top] = item;
		s->top = s->top + 1;
	}
	else{
		printf("Increase the size of stack!!\n");
	}
}

int pop(Stack *s)
{
	int item;

	if(s->top==0){
		return -1;
	}
	else{

		s->top = s->top - 1;
		item = s->data[s->top];

	}

	return item;
}

int main()
{
	Stack stk;
	int item;

	stk.top=0;

	push(&stk,1);
	push(&stk,2);
	push(&stk,3);

	item = pop(&stk);
	printf("%d\n",item);

	item = pop(&stk);
	printf("%d\n",item);
}
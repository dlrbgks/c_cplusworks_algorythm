//day31-3
#include<stdio.h>

#define MAX_LEN 4

typedef struct {
	int data[MAX_LEN];
	int top;
}Stack;

void initStack(Stack* s) {
	s->top = -1;
}

void push(Stack* s, int value) {
	if (s->top >= MAX_LEN - 1) {
		printf("Stack is full!\n");
		return;
	}
	s->data[++(s->top)] = value;
	printf("%d ", value);
}

int pop(Stack* s) {
	if (s->top < 0) {
		printf("Stack is empty!\n");
		return -1;
	}
	else {
		return s->data[(s->top)--];
	}
}

void printStack(Stack* s) {
	printf("\n== Stack Info ==\n");
	printf("Current Stack status : ");
	if (s->top == -1) {
		printf("Empty\n");
	}
	else {
		printf("left element : %d\n", s->top + 1);
		for (int i = 0; i < s->top; i++) {
			printf("%d ", s->data[i]);
		}
	}
}

int main() {
	Stack stack;
	initStack(&stack);

	puts("== Insert data in stack ==");
	push(&stack, 80);
	push(&stack, 70);
	push(&stack, 95);
	push(&stack, 85);

	puts("\n== Delete data in stack ==");
	while (stack.top != -1) {
		printf("%d ", pop(&stack));
	}

	printStack(&stack);


	return 0;
}
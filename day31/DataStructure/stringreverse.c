//dat31-4
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MAX_LEN 120

typedef struct {
	char data[MAX_LEN];
	int top;
}Stack;

void initStack(Stack* s) {
	s->top = -1;
}

void push(Stack* s, char ch) {
	if (s->top >= MAX_LEN - 1) {
		printf("Stack is full!\n");
		return;
	}
	else {
		s->data[++(s->top)] = ch;
	}
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

int main() {
	Stack stack;
	initStack(&stack);

	printf("Enter string : ");
	char str[MAX_LEN];
	fgets(str, MAX_LEN, stdin);

	for (int i = 0;str[i] != '\0'; i++) {
		push(&stack, str[i]);
	}

	printf("reverse string : ");
	while (stack.top != -1) {
		printf("%c", pop(&stack));
	}



	return 0;
}
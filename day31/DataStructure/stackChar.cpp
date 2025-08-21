//day31-2
#include<stdio.h>

#define MAX_LEN 3

char stack[MAX_LEN];
int top = -1;

void push(char value) {
	if (top >= MAX_LEN - 1) {
		printf("Stack is full!\n");
		return;
	}
	stack[++top] = value;
	printf("PUSH : %c\n", value);
}

char pop() {
	if (top < 0) {
		printf("Stack is empty!\n");
		return '\0';
	}
	else {
		return stack[top--];
	}
}

int main() {
	puts("== Insert data in stack ==");
	push('a');
	push('b');
	push('c');
	push('d');

	//printf("%c\n", stack[0]);

	puts("== Delete data in stack ==");
	while (top != -1) {
		printf("%c ", stack[top]);
		pop();
	}




	return 0;
}
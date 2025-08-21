//day31-1
#include<stdio.h>

#define MAX_LEN 4

int stack[MAX_LEN];
int top = -1;

void push(int value) {
	if (top >= MAX_LEN - 1) {
		printf("Stack is full!\n");
		return;
	}
	top++;
	stack[top] = value;
	printf("PUSH : %d\n", value);
}

int pop() {
	if (top < 0) {
		printf("Stack is empty!\n");
		return -1;
	}
	else{
		return stack[top--];
	}
}

int main() {
	puts("== Insert data in stack ==");

	push(80);
	push(70);
	push(95);
	push(85);
	push(85);

	puts("== Delete data in stack ==");
	
	/*
	printf("Current location : %d\n", stack[top]);
	pop();
	printf("Current location : %d\n", stack[top]);
	pop();
	printf("Current location : %d\n", stack[top]);
	pop();
	printf("Current location : %d\n", stack[top]);
	pop();
	printf("Current location : %d\n", stack[top]);
	pop();
	*/

	while (top != -1) {
		printf("%d ", stack[top]);
		pop();
	}




	return 0;
}
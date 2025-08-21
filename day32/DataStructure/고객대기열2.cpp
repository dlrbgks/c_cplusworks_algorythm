//day32-3
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

//char str[3][10] = { "绊按A", "绊按B", "绊按C" };

#define MAX_QUEUE 4
#define NAME_LEN 20

char* queue[MAX_QUEUE];
int front = 0, rear = 0;

bool isEmpty() {
	return front == rear;
}

bool isFull() {
	return (rear + 1) % MAX_QUEUE == front;
}

void enQueue(const char* name) {
	if (isFull()) {
		puts("Queue is full!");
		return;
	}
	queue[rear] = (char*)malloc(strlen(name) + 1);
	if (queue[rear] == NULL) {
		printf("Fail memory allocation!\n");
		exit(1);
	}
	strcpy(queue[rear], name);
	rear = (rear + 1) % MAX_QUEUE;
}

int deQueue(char* name) {
	if (isEmpty()) {
		puts("Queue is empty!");
		name[0] = '\0';
		return -1;
	}
	strcpy(name, queue[front]);
	free(queue[front]);
	queue[front] = NULL;
	front = (front + 1) % MAX_QUEUE;
	return 0;
}

int main() {
	char customer[NAME_LEN];

	enQueue("绊按A");
	enQueue("绊按B");
	enQueue("绊按C");

	while (!isEmpty()) {
		deQueue(customer);
		printf("%s, task ongoing...\n", customer);
	}
	puts("All customer's task complete!");






	return 0;
}
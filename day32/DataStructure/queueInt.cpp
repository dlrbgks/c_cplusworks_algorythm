//day32-1
#include<stdio.h>

#define MAX_QUEUE 4

int queue[MAX_QUEUE];
int front = 0;
int rear = 0;

void enQueue(int x) {
	if ((rear + 1) % MAX_QUEUE == front) {
		puts("Queue is full!");
		return;
	}

	queue[rear] = x;
	rear = (rear + 1) % MAX_QUEUE;
	printf("front = %d, rear = %d, x = %d\n", queue[front], queue[rear], x);
}

int deQueue() {
	if (front == rear) {
		puts("Queue is empty!");
		return -1;
	}

	int data = queue[front];
	front = (front + 1) % MAX_QUEUE;
	return data;
}

int main() {
	puts("=== Insert data in queue ===");
	enQueue(10);
	enQueue(20);
	enQueue(30);
	enQueue(40);

	puts("=== Getout data from queue ===");
	int val;
	/*
	val = deQueue();
	printf("%d\n", val);
	val = deQueue();
	printf("%d\n", val);
	val = deQueue();
	printf("%d\n", val);
	val = deQueue();
	printf("%d\n", val);
	*/
	while (front != rear) {
		val = deQueue();
		printf("%d\n", val);
	}


	return 0;
}
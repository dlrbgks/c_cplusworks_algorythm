//day33-1
#define _CRT_SECURE_NO_WARNINGS
#include"CircularQueue.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

void initQueue(CircularQueue* q) {
	q->front = 0;
	q->rear = 0;
}


bool isEmpty(CircularQueue* q) {
	return q->front == q->rear;
}

bool isFull(CircularQueue* q) {
	return (q->rear + 1) % QUEUE_SIZE == q->front;
}

void enQueue(CircularQueue* q, int value) {
	if (isFull(q)) {
		puts("Queue is full!");
		return;
	}
	q->data[q->rear] = value;
	printf("%d ", value);
	q->rear = (q->rear + 1) % QUEUE_SIZE;
}

int deQueue(CircularQueue* q) {
	if (isEmpty(q)) {
		puts("Queue is empty!");
		return -1;
	}
	int value = q->data[q->front];
	q->front = (q->front + 1) % QUEUE_SIZE;
	return value;
}

void printQueue(CircularQueue* q) {
	printf("Queue status : ");
	if (isEmpty(q)) {
		printf("Empty\n");
		return;
	}
	int i = q->front;
	while (i != q->rear) {
		printf("%d ", q->data[i]);
		i = (i + 1) % QUEUE_SIZE;
	}
	printf("\n");
}

//day33-2
#ifndef CIRCULAR_QUEUE_H
#define CIRCULAR_QUEUE_H

#define _CRT_SECURE_NO_WARNINGS
#include"CircularQueue.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>


#define QUEUE_SIZE 10

typedef struct
{
	int data[QUEUE_SIZE];
	int front;
	int rear;
}CircularQueue;

void initQueue(CircularQueue* q);

bool isEmpty(CircularQueue* q);

bool isFull(CircularQueue* q);

void enQueue(CircularQueue* q, int value);

int deQueue(CircularQueue* q);

void printQueue(CircularQueue* q);




#endif // !CIRCULAR_QUEUE_H

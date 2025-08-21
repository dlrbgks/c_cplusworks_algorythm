//day33-3
#define _CRT_SECURE_NO_WARNINGS
#include"CircularQueue.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>


int main() {
	CircularQueue q1;

	initQueue(&q1);

	printf("=== Enter data in queue ===\n");
	enQueue(&q1, 10);
	enQueue(&q1, 20);
	enQueue(&q1, 30);
	printf("\n");
	printQueue(&q1);

	printf("=== Getout data from queue ===\n");
	printf("%d ", deQueue(&q1));
	printf("%d ", deQueue(&q1));
	printf("%d ", deQueue(&q1));





	return 0;
}
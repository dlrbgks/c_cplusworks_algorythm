//day33-6
#include<stdio.h>
#include<stdlib.h>

typedef struct {
	int data;
	struct Node* next;
}Node;

int main() {
	Node* head;
	Node* second;
	Node* third;

	head = (Node*)malloc(sizeof(Node));
	second = (Node*)malloc(sizeof(Node));
	third = (Node*)malloc(sizeof(Node));

	head->data = 10;
	head->next = second;

	second->data = 20;
	second->next = third;

	third->data = 30;
	third->next = NULL;

	Node* current = head;
	while (current != NULL) {
		printf("current data : %d\n", current->data);		
		current = current->next;
	}







	free(head);
	free(second);
	free(third);

	return 0;
}
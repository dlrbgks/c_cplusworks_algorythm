//day33-8
#include<stdio.h>
#include<stdlib.h>

typedef struct {
	int data;
	struct Node* next;
}Node;


void printList(Node* head) {
	Node* current = head;
	while (current != NULL) {
		printf("%d\n", current->data);
		current = current->next;
	}
}

int main() {
	int num;
	int value;
	Node* head = NULL;
	Node* current = NULL;
	Node* newNode = NULL;

	printf("Enter node number : ");
	scanf_s("%d", &num);

	for (int i = 0; i < num;i++) {
		newNode = (Node*)malloc(sizeof(Node));

		printf("Enter data in %d Node : ", i + 1);
		scanf_s("%d", &value);

		newNode->data = value;
		newNode->next = head;
		head = newNode;
	}

	puts("Print Linked List");
	printList(head);






	return 0;
}
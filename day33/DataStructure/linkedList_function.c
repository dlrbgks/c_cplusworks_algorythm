//day33-7
#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int data;
	struct Node* next;
}Node;

Node* createNode(int value) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (newNode == NULL) {
		puts("Fail memory allocation!");
		exit(1);
	}
	newNode->data = value;
	newNode->next = NULL;
	
	return newNode;
}

int getLength(Node* head) {
	int count = 0;
	Node* current = head;
	while (current != NULL) {
		count++;
		current = current->next;
	}
	return count;
}

void printList(Node* head) {
	Node* current = head;
	while (current != NULL) {
		printf("%d\n", current->data);
		current = current->next;
	}
}

int main() {
	Node* head = createNode(10);
	Node* second = createNode(20);
	Node* third = createNode(30);

	head->next = second;
	second->next = third;

	puts("Print Linked List");
	printList(head);

	puts("Linked List's Length");
	printf("%d\n", getLength(head));


	Node* current = head;
	while (current != NULL) {
		Node* temp = current;
		printf("free(%d)", current->data);
		current = current->next;
		free(temp);
	}

	return 0;
}
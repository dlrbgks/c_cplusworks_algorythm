//day33-5
#include<stdio.h>
#include<stdlib.h>

typedef struct {
	int data;
	struct List* next;
}List;

int main() {
	List x, y, z;
	x.data = 10;
	y.data = 20;
	z.data = 30;

	x.next = &y;
	y.next = &z;
	z.next = NULL;
	
	List* p;
	p = &x;

	printf("%d %x\n", x.data, p->next);
	p = p->next;
	printf("%d %x\n", y.data, p->next);
	p = p->next;
	printf("%d %x\n", z.data, p->next);

	for (p = &x; p != NULL; p = p->next) {
		printf("%d -> ", p->data);
	}
	puts("NULL");

	return 0;
}
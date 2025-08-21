//dayy33-4
#include<stdio.h>

typedef struct {
	int num;
}Student;

int main() {
	Student st[10];
	int i;
	for (i = 0; i < 10; i++) {
		st[i].num = i + 1;
	}
	for (i = 0; i < 10; i++) {
		printf("%d ", st[i].num);
	}
	printf("\n");
	puts("Student number 4 data delete");
	st[3].num = 0;
	puts("shift room left");
	for (i = 3; i < 9; i++) {
		st[i].num = st[i + 1].num;
	}
	st[9].num = 0;
	for (i = 0; i < 10; i++) {
		printf("%d ", st[i].num);
	}



	return 0;
}
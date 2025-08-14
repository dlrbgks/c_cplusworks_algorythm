//day28-5
#include<stdio.h>
#include<stdlib.h>
int main() {
	int size;
	printf("Enter size : ");
	scanf_s("%d", &size);
	int* a = (int*)malloc(size * sizeof(int));
	for (int i = 0; i < size; i++) {
		printf("Enter arr[%d] : ", i);
		scanf_s("%d", &a[i]);
	}

	printf("Enter number for search : ");
	int num;
	scanf_s("%d", &num);
	int count = 0;
	for (int i = 0; i < size;i++) {
		if (a[i] == num) {
			printf("%d 발견!\n", num);
			count++;
		}
	}
	printf("%d %d회 발견!\n", num, count);







	return 0;
}
//day28-7
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

	for (int i = 0; i < size;i++) {
		if (a[i] == num) {
			printf("%d번째, arr[%d]에 검색값 있음.", i + 1, i);
		}
	}






	return 0;
}
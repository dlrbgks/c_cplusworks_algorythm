//day28-8
#include<stdio.h>
#include<stdlib.h>

void sequentialSearch(int arr[], int n) {
	printf("Enter number for search : ");
	int num;
	scanf_s("%d", &num);

	for (int i = 0; i < n;i++) {
		if (arr[i] == num) {
			printf("%d번째, arr[%d]에 검색값 있음.", i + 1, i);
		}
	}
}

int main() {

	int size;
	printf("Enter size : ");
	scanf_s("%d", &size);
	int* a = (int*)malloc(size * sizeof(int));
	for (int i = 0; i < size; i++) {
		printf("Enter arr[%d] : ", i);
		scanf_s("%d", &a[i]);
	}

	sequentialSearch(a, size);






	return 0;
}
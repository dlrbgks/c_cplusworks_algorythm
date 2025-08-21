//day29-5
#include<stdio.h>
#include<stdlib.h>

int seqSearchAll(int arr[], int n, int x, int *idx) {
	int count = 0;
	int i;
	for (i = 0; i < n; i++) {
		if (arr[i] == x) {
			idx[count++] = i;
		}
	}
	return count;
}

int main() {

	int size;
	printf("Enter size : ");
	scanf_s("%d", &size);
	int* a = (int*)malloc(size * sizeof(int));
	int x;
	for (int i = 0; i < size; i++) {
		printf("Enter arr[%d] : ", i);
		scanf_s("%d", &a[i]);
	}
	printf("Enter num for search : ");
	scanf_s("%d", &x);

	int* idx = (int*)malloc(sizeof(int) * size);
	int count = seqSearchAll(a, size, x, idx);
	if (count == 0) {
		puts("search fail!");
	}
	else {
		printf("number %d, founded %d time.\n", x, count);
		for (int i = 0; i < count; i++) {
			printf("%d locatetd arr[%d]!\n", x, idx[i]);
		}
	}
	












	return 0;
}
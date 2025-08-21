//day29-4
#include<stdio.h>
#include<stdlib.h>

int seqSearch(int arr[], int n, int x) {
	
	int i = 0;
	while (1) {
		if (i == n) {
			return -1;
		}
		if (arr[i] == x) {
			return i;
		}
		i++;
	}
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

	int idx = seqSearch(a, size, x);
	if (idx == -1) {
		puts("search fail!");
	}
	else {
		printf("%d locatetd arr[%d]!\n", x, idx);
	}






	return 0;
}
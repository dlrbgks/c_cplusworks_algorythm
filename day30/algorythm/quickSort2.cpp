//day30-3
#include<stdio.h>
#include<stdlib.h>

void swap(int* x, int* y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void quickSorting(int a[], int left, int right) {
	int pl = left;
	int pr = right;
	int pivot = a[(pl + pr) / 2];
	int temp;

	while (pl <= pr) {
		while (a[pl] < pivot) {
			pl++;
		}
		while (a[pr] > pivot) {
			pr--;
		}
		if (pl <= pr) {
			swap(&a[pl], &a[pr]);
			pl++;
			pr--;
		}
	}
	//printf("pivot value : %d\n", pivot);
	//printf("under pivot group\n");
	//for (int i = 0;i <= pl - 1;i++) {
	//	printf("%d ", a[i]);
	//}
	//putchar('\n');
	//printf("over pivot group\n");
	//for (int i = pr + 1; i <= right; i++) {
	//	printf("%d ", a[i]);
	//}
	//putchar('\n');

	if (left < pr) {
		quickSorting(a, left, pr);
	}
	if (pl < right) {
		quickSorting(a, pl, right);
	}
}

int main() {
	//int arr[] = { 1, 8, 7, 4, 5, 2, 6, 3, 9 };
	
	int* arr;
	printf("Enter array size : ");
	int size;
	scanf_s("%d", &size);
	
	arr = (int*)malloc(sizeof(int) * size);

	for (int i = 0; i < size; i++) {
		printf("Enter array[%d] : ", i);
		scanf_s("%d", &arr[i]);
	}

	quickSorting(arr, 0, size - 1);

	puts("=== after auick sort ===");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}






	return 0;
}
//day30-2
#include<stdio.h>

void swap(int* x, int* y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void partition(int a[], int n) {
	int pl = 0;
	int pr = n - 1;
	int pivot = a[n / 2];
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
	printf("pivot value : %d\n", pivot);
	printf("under pivot group\n");
	for (int i = 0;i <= pl - 1;i++) {
		printf("%d ", a[i]);
	}
	putchar('\n');
	printf("over pivot group\n");
	for (int i = pr + 1; i < n; i++) {
		printf("%d ", a[i]);
	}
	putchar('\n');
}

int main() {
	int arr[] = { 1, 8, 7, 4, 5, 2, 6, 3, 9 };
	int size = sizeof(arr) / sizeof(arr[0]);

	partition(arr, size);








	return 0;
}
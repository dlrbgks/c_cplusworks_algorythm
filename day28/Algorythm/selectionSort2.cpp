//day28-3
#include<stdio.h>
#include<stdlib.h>

void selectionSort(int a[], int n) {
	int i, j, temp;
	int minIdx;
	for (i = 0; i < n - 1; i++) {
		minIdx = i;
		for (j = i + 1; j < n; j++) {
			if (a[j] < a[minIdx]) {
				minIdx = j;
			}
		}
		temp = a[i];
		a[i] = a[minIdx];
		a[minIdx] = temp;
	}

}

int main() {

	int size;
	printf("Enter size : ");
	scanf_s("%d", &size);
	int* arr = (int*)malloc(sizeof(int) * size);
	int i, j, temp;
	int minIdx;

	for (i = 0; i < size; i++) {
		printf("Enter arr[%d] : ", i);
		scanf_s("%d", &arr[i]);
	}

	selectionSort(arr, size);

	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}



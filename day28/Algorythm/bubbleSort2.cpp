//day28-1
#include<stdio.h>

void bubbleSort(int a[], int n) {
	int i, j, temp;
	for (i = 0; i < 5;i++) {
		for (j = 0; j < 4; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

int main() {

	int arr[] = { 41, 8, 36, 77, 15 };
	int i, j, size;
	size = sizeof(arr) / sizeof(arr[0]);

	bubbleSort(arr, size);


	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}


	return 0;
}
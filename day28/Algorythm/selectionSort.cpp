//day28-2
#include<stdio.h>

int main() {
	int arr[] = { 41, 36, 8, 77, 15 };
	int i, j, temp;
	int size = sizeof(arr) / sizeof(arr[0]);
	int minIdx;

	for (i = 0; i < size - 1; i++) {
		minIdx = i;
		for (j = i + 1; j < size; j++) {
			if (arr[j] < arr[minIdx]) {
				minIdx = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[minIdx];
		arr[minIdx] = temp;
	}

	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}







	return 0;
}
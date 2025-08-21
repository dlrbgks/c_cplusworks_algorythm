//day29-3
#include<stdio.h>
#include<stdlib.h>

void insertSort(int arr[], int size) {
	int i, j, temp;
	for (i = 1; i < 5;i++) {
		temp = arr[i];
		for (j = i; j > 0 && arr[j - 1] > temp; j--) {
			arr[j] = arr[j - 1];
		}
		arr[j] = temp;
	}

	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}

}

int main() {

	int arr[5] = { 41, 36, 8, 77, 15 };
	int size = sizeof(arr) / sizeof(arr[0]);


	insertSort(arr, size);











	return 0;
}
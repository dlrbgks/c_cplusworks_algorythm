//day26-1
#include<stdio.h>
#include<stdlib.h>

int findMax(int a[], int len) {
	int max = a[0];
	for (int i = 0; i < len; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	return max;
}

int main() {
	/*
	int arr[] = { 2,5,1,4,3 };
	int max;
	int size;
	size = sizeof(arr) / sizeof(arr[0]);
	max = findMax(arr, size);
	printf("%d\n", max);
	*/

	int number;
	printf("Enter number of people : ");
	scanf_s("%d", &number);
	int *height = (int*)malloc(sizeof(int) * number);

	printf("Enter height of %d person", number);
	for (int i = 0; i < number; i++) {
		printf("height[%d] : ", i);
		scanf_s("%d", &height[i]);
	}
	printf("max : %d\n", findMax(height, number));




	free(height);

	return 0;
}
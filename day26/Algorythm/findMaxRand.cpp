//day26-2
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

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

	int number;
	printf("Enter number of people : ");
	scanf_s("%d", &number);
	int* height = (int*)malloc(sizeof(int) * number);

	srand(time(NULL));
	for (int i = 0; i < number; i++) {
		height[i] = 100 + rand() % 90 + 1;
	}
	for (int i = 0; i < number; i++) {
		printf("height[%d] : %d\n", i, height[i]);
	}

	printf("max : %d\n", findMax(height, number));




	free(height);














	return 0;
}
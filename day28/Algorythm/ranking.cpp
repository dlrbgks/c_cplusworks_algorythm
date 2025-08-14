//day28-4
#include<stdio.h>
#include<stdlib.h>
int main() {
	printf("Enter size : ");
	int size;
	scanf_s("%d", &size);
	int* arr = (int*)malloc(size * sizeof(int));
	int* rank = (int*)malloc(size * sizeof(int));
	for (int i = 0; i < size; i++) {
		printf("Enter arr[%d] : ", i);
		scanf_s("%d", &arr[i]);
		rank[i] = 1;
	}


	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (arr[i] < arr[j]) {
				rank[i]++;
			}
		}
	}

	for (int i = 0; i < size; i++) {
		printf("%d ", rank[i]);
	}







	return 0;
}
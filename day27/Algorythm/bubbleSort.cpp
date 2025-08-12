//day27-6
#include<stdio.h>

/*
	버블 정렬
	배열에서 인접한 두 개의 요소를 비교, 자리를 바꾸는 방식
	요소 개수가 n개면 n-1회 비교 후 교환
*/

int main() {
	int arr[] = { 41, 8, 36, 77, 15 };
	int i, j, temp;
	for (i = 0; i < 5;i++) {
		for (j = 0; j < 4; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}



	return 0;
}
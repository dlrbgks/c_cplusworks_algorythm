//day27-6
#include<stdio.h>

/*
	���� ����
	�迭���� ������ �� ���� ��Ҹ� ��, �ڸ��� �ٲٴ� ���
	��� ������ n���� n-1ȸ �� �� ��ȯ
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
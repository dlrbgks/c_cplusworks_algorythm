//day30-1
#include<stdio.h>

int binarySearch(int  a[], int n, int x) {

	int high, mid, low;
	low = 0;
	high = 8;
	while (low <= high) {
		mid = (low + high) / 2;

		if (a[mid] == x) {
			return mid;
		}
		else if (a[mid] < x) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}

	return -1;

}

int main() {
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int high, mid, low;
	int size = sizeof(arr) / sizeof(arr[0]);
	int x;
	x = 8;

	int idx;

	idx = binarySearch(arr, size, x);
	if (idx == -1) {
		printf("%d is not exist\n", x);
	}
	else {
		printf("%d is located arr[%d].\n", x, idx);
	}




	return 0;
}
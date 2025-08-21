//day29-6
#include<stdio.h>
int main() {
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int high, mid, low;
	low = 0;
	high = 8;
	int x;
	x = 8;
	int found = 0;

	while (low <= high) {
		mid = (low + high) / 2;

		if (arr[mid] == x) {
			printf("%d is located arr[%d].\n", x, mid);
			found = 1;
			break;
		}
		else if (arr[mid] < x) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	if (!found) {
		printf("%d isn't exist!\n", x);
	}





	return 0;
}
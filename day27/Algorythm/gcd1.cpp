//day27-4
#include<stdio.h>


int gcd(int x, int y) {
	int temp;
	x < y ? temp = x : temp = y;
	while (1) {
		if (x % temp == 0 && y % temp == 0) {
			return temp;
		}
		temp--;
	}
}

int main() {
	int num1, num2;
	printf("Enter num 1 : ");
	scanf_s("%d", &num1);
	printf("Enter num 2 : ");
	scanf_s("%d", &num2);
	printf("gcd : %d\n", gcd(num1, num2));






	return 0;
}
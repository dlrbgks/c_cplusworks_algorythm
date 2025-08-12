//day27-5
#include<stdio.h>


int U_gcd(int x, int y) {
	if (y == 0) {
		return x;
	}
	else {
		return U_gcd(y, x % y);
	}
}

int main() {
	int num1, num2;
	printf("Enter num 1 : ");
	scanf_s("%d", &num1);
	printf("Enter num 2 : ");
	scanf_s("%d", &num2);
	printf("gcd : %d\n", U_gcd(num1, num2));






	return 0;
}
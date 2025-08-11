//day26-4
#include<stdio.h>

int factorial(int n) {
	if (n == 1) {
		return 1;
	}
	else if (n < 1) {
		printf("please enter bigger then 0\n");
		return 0;
	}
	return n * factorial(n - 1);
}

int main() {
	printf("%d\n", factorial(5));






	return 0;
}
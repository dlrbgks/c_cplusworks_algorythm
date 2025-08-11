//day26-5
#include<stdio.h>

int fibo(int n) {
	if (n == 1) {
		return 1;
	}
	else if (n == 2) {
		return 1;
	}
	else if (n <= 0) {
		printf("Please enter correct number.\n");
		return 0;
	}
	else {
		return fibo(n - 2) + fibo(n - 1);
	}
}

int main() {
	printf("Enter fibonacci locate : ");
	int num;
	scanf_s("%d", &num);
	printf("%d\n", fibo(num));










	return 0;
}
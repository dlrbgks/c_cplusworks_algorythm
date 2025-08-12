//day27-1
#include<stdio.h>

int memo[50] = { 0 };

int fibo(int n) {
	if (memo[n] != 0) {
		return memo[n];
	}
	if (n < 2) {
		return memo[n] = 1;
	}
	else {
		return memo[n] = fibo(n - 2) + fibo(n - 1);
	}
}

int main() {

	printf("Enter fibonacci locate : ");
	int num;
	scanf_s("%d", &num);
	printf("%d\n", fibo(num));



	return 0;
}
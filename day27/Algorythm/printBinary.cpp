//day27-3
#include<stdio.h>

void printBin(int a) {
	if (a == 0 || a == 1) {
		printf("%d", a);
	}
	else {
		printBin(a / 2);
		printf("%d", a % 2);
	}
}

int main() {

	int x = 11;
	printBin(x);
	





	return 0;
}
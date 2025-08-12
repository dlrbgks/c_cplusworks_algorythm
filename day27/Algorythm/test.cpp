//day27-2
#include<stdio.h>
int func(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n * func(n - 1);
	}
}
int main() {
	for (int i = 5; i >= 0; i--) {
		if (i % 2 == 1) {
			printf("func(%d) : %d\n", i, func(i));
		}
	}

	return 0;
}
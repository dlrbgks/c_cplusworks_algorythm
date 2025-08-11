//day26-3
#include<stdio.h>

void func(int n) {
	if (n <= 0) {
		return;
	}
	else {
		printf("Help me!\n");
		func(n-1);
	}
}

int main() {

	func(4);








	return 0;
}
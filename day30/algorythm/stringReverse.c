//day30-4
#include<stdio.h>
#include<string.h>
int main() {
	//char a1[] = "DOG";
	//char a2[10];
	//int i;


	//for (i = 0; i < 4; i++) {
	//	a2[i] = a1[2 - i];
	//	a2[3] = '\0';
	//}

	//printf("%s\n", a2);
		
	char b1[] = "DOG";
	char b2[10];

	int len = strlen(b1);
	
	for (int i = len - 1; i >= 0; i--) {
		b2[2 - i] = b1[i];
	}
	b2[len] = '\0';

	printf("%s\n", b2);




	return 0;
}
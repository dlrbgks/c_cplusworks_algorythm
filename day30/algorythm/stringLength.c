//day30-5
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int strLength(char* s) {
	int len = 0;
	while (*s++ != '\0') {
		len++;
	}
	return len;
}

int main() {
	char a[] = "DOG";
	char* b = "DOG";
	printf("%s %d\n", a, strlen(a));
	printf("%s %d\n", b, strlen(b));

	printf("%c\n", b[0]);
	printf("%c\n", b[1]);
	printf("%c\n", b[2]);

	char str[128];
	int len;
	printf("Enter string : ");
	scanf("%s", str);
	len = strLength(str);
	printf("%s %d\n", str, len);



}
#include <stdio.h>

int main() {
	char str[100];
	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);

	printf("입력된 문자열: %s", str);
	
	return 0;
}
#include <stdio.h>

int main() {
	char str[100];
	printf("���ڿ� �Է�: ");
	fgets(str, sizeof(str), stdin);

	printf("�Էµ� ���ڿ�: %s", str);
	
	return 0;
}
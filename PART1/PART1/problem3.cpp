#include <stdio.h>

int main() {
	int num1, num2;
	printf("�� ���� 16������ �Է�: ");
	scanf("%x %x", &num1, &num2);

	int sum = num1 + num2;

	printf("���� ��� 8���� : %o\n", sum);
	printf("���� ��� 10���� : %d\n", sum);
	printf("���� ��� 16���� : %x\n", sum);
	
	return 0;
}
#include <stdio.h>

int main() {
	double a, b;
	printf("�� ���� �Ǽ� �Է�: ");
	scanf("%lf %lf", &a, &b);

	double sum = a + b;
	double sub = a - b;
	double mul = a * b;
	double div = a / b;

	printf("���� ���: %lf\n", sum);
	printf("���� ���: %lf\n", sub);
	printf("���� ���: %lf\n", mul);
	printf("������ ���: %lf\n", div);

	return 0;
}
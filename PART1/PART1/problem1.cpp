#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	char c;
	int num1;
	double num2;
	char str[100];
	printf("[����, ����, �Ǽ�, ���ڿ�]�� �������� �Է�: ");
	scanf("%c, %d, %lf, %s", &c, &num1, &num2, str);
	printf("�Էµ� ������ ���: %c, %d, %lf, %s \n", c, num1, num2, str);
	return 0;
}
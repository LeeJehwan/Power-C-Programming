#include <stdio.h>

int main() {
	int num1, num2;
	printf("�� ���� ���ڸ� �Է��ϼ���: ");
	scanf("%d %d", &num1, &num2);
	int ans = num1 > num2 ? num1 : num2;
	printf("ū ���� %d\n", ans);

	return 0;
}
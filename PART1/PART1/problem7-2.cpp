#include <stdio.h>

int main() {
	int num1, num2, num3;
	printf("�� ���� ���ڸ� �Է��ϼ���: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	//int ans = num1 > num2 ? num1 : num2;
	//ans = ans > num3 ? ans : num3;
	int ans = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
	
	printf("ū ���� %d\n", ans);

	return 0;
}
#include <stdio.h>

int main() {
	int num1, num2;
	printf("두 개의 숫자를 입력하세요: ");
	scanf("%d %d", &num1, &num2);
	int ans = num1 > num2 ? num1 : num2;
	printf("큰 수는 %d\n", ans);

	return 0;
}
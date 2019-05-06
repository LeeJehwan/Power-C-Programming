#include <stdio.h>

int main() {
	int num1, num2, num3;
	printf("세 개의 숫자를 입력하세요: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	//int ans = num1 > num2 ? num1 : num2;
	//ans = ans > num3 ? ans : num3;
	int ans = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
	
	printf("큰 수는 %d\n", ans);

	return 0;
}
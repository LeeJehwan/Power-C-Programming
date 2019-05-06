#include <stdio.h>

void dec_to_bin(int num) {
	if (num == 0)
		return;

	dec_to_bin(num / 2);
	printf("%d", num % 2);
}


int main() {
	int num;
	printf("10진수 정수 입력: ");
	scanf("%d", &num);

	printf("%d를 2진수로 변환하면: ", num);
	dec_to_bin(num);
	printf("\n");

	return 0;
}
#include <stdio.h>

void dec_to_bin(int num) {
	if (num == 0)
		return;

	dec_to_bin(num / 2);
	printf("%d", num % 2);
}


int main() {
	int num;
	printf("10���� ���� �Է�: ");
	scanf("%d", &num);

	printf("%d�� 2������ ��ȯ�ϸ�: ", num);
	dec_to_bin(num);
	printf("\n");

	return 0;
}
#include <stdio.h>

int main() {
	char ch;
	int cnt = 0;
	while (1) {
		printf("Data input (Ctrl+Z to exit): ");
		ch = getchar();
		while (getchar() != '\n');
		if (ch == EOF)
			break;
		cnt++;
	}
	printf("�Էµ� ������ ��: %d\n", cnt);
}
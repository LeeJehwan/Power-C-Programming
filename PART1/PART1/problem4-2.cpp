#include <stdio.h>

int main() {
	int sum = 0;
	while (1) {
		int num;
		printf("Data input (Ctrl+Z to exit): ");
		if (scanf("%d", &num) == EOF)
			break;

		sum += num;
	}
	printf("ÃÑ ÇÕ: %d\n", sum);
}
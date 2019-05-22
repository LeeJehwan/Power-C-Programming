#include <stdio.h>

#include <stdlib.h>
#include <string.h>


int main() {
	char str[100];

	fgets(str, sizeof(str), stdin);
	int idx = 0;
	while (str[idx] != '\n') {
		idx++;
	}
	str[idx] = 0;
	scanf("%s", str);

	printf("%s´Â ÀÌ»Ý\n", str);
}
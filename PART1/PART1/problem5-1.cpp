#include <stdio.h>

int main() {
	double a, b;
	printf("µÎ °³ÀÇ ½Ç¼ö ÀÔ·Â: ");
	scanf("%lf %lf", &a, &b);

	double sum = a + b;
	double sub = a - b;
	double mul = a * b;
	double div = a / b;

	printf("µ¡¼À °á°ú: %lf\n", sum);
	printf("»¬¼À °á°ú: %lf\n", sub);
	printf("°ö¼À °á°ú: %lf\n", mul);
	printf("³ª´°¼À °á°ú: %lf\n", div);

	return 0;
}
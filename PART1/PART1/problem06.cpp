#include <stdio.h>

int main() {
	int input;
	double avg;
	printf("������ ������ �Է�: ");
	scanf("%d", &input);
	int max, min, sum;
	max =min = sum = input;

	for (int i = 0; i < 6; i++) {
		printf("������ ������ �Է�: ");
		scanf("%d", &input);
		
		if (max < input)
			max = input;
		if (min > input)
			min = input;
		sum += input;
	}
	avg = (double)sum / 7;

	printf("�ִ밪: %d\n", max);
	printf("�ּҰ�: %d\n", min);
	printf("��ü��: %d\n", sum);
	printf("��  ��: %lf\n", avg);
	
	return 0;
}
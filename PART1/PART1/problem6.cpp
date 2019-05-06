#include <stdio.h>

int main() {
	int input;
	double avg;
	printf("정수형 데이터 입력: ");
	scanf("%d", &input);
	int max, min, sum;
	max =min = sum = input;

	for (int i = 0; i < 6; i++) {
		printf("정수형 데이터 입력: ");
		scanf("%d", &input);
		
		if (max < input)
			max = input;
		if (min > input)
			min = input;
		sum += input;
	}
	avg = (double)sum / 7;

	printf("최대값: %d\n", max);
	printf("최소값: %d\n", min);
	printf("전체합: %d\n", sum);
	printf("평  균: %lf\n", avg);
	
	return 0;
}
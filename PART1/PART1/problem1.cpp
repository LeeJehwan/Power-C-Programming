#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	char c;
	int num1;
	double num2;
	char str[100];
	printf("[문자, 정수, 실수, 문자열]의 포맷으로 입력: ");
	scanf("%c, %d, %lf, %s", &c, &num1, &num2, str);
	printf("입력된 데이터 출력: %c, %d, %lf, %s \n", c, num1, num2, str);
	return 0;
}
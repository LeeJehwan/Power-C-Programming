#include <iostream>
using namespace std;
#define DIV_BY_ZERO_ERROR -256

int DivInt(int n1, int n2, int *q, int *r) {
	if (n2 == 0)
		return DIV_BY_ZERO_ERROR;

	*q = n1 / n2;
	*r = n1 % n2;
	return 1;
}

int main() {
	int n1, n2;
	int q = 0, r = 0;
	while (1) {
		cout << "나눗셈 위한 두 정수 입력: ";
		cin >> n1 >> n2;
		int ret = DivInt(n1, n2, &q, &r);
		if (ret == DIV_BY_ZERO_ERROR)
			cout << "0으로 나누는 오류발생! 숫자 재입력" << endl;
		else
			break;
	}
	cout << "몫: " << q << " 나머지: " << r << endl;
	return 0;
}
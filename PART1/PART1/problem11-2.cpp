#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int n;
	while (1) {
		cout << "2 이상 입력: ";
		cin >> n;
		if (n > 1)
			break;
		cout << "2 이상을 입력하세요" << endl;
	}

	int sum = 0;
	int idx = 1;
	while (1) {
		sum += idx;
		if (sum > n)
			break;
		idx++;
	}
	cout << idx << "를 더할 때 처음" << n << "을 넘기 시작한다" << endl;
	cout << n << "를 넘기 이전의 합: " << sum - idx << endl;
	cout << n << "를 넘은 이후의 합: " << sum << endl;

	return 0;
}
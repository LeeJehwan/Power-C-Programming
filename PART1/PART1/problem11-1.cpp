#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "자연수 입력: ";
	cin >> n;

	int odd = 0;
	int even = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 2)
			odd += i;
		else
			even += i;
	}
	cout << n << "이하 홀수 합: " << odd << endl;
	cout << n << "이하 짝수 합: " << even << endl;

	return 0;
}
#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int n;
	while (1) {
		cout << "1 이상의 정수 입력: ";
		cin >> n;
		if (n > 0)
			break;
		cout << "1 이상의 정수를 입력해야 합니다." << endl;
	}
	
	long long sum = (n * (n + 1)) / 2;
	cout << "1부터 " << n << "까지의 합은 " << sum << endl;
	return 0;
}
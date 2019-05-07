#include <iostream>
#include <stdio.h>
using namespace std;

int factorial(int n) {
	if (n == 1)
		return n;
	
	return n * factorial(n - 1);
}

int main() {
	int n;
	while (1) {
		cout << "숫자 입력(1이상): ";
		cin >> n;
		if (n > 0)
			break;
		cout << "1 이상의 숫자를 입력해주세요" << endl;
	}

	cout << n << "! = " << factorial(n) << endl;
	
	return 0;
}
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
		cout << "���� �Է�(1�̻�): ";
		cin >> n;
		if (n > 0)
			break;
		cout << "1 �̻��� ���ڸ� �Է����ּ���" << endl;
	}

	cout << n << "! = " << factorial(n) << endl;
	
	return 0;
}
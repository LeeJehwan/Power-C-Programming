#include <iostream>
#include <stdio.h>
using namespace std;
#define FACT_ERROR -1

int factorial(int n) {
	if (n < 1)
		return FACT_ERROR;
	if (n == 1)
		return n;
	return n * factorial(n - 1);
}

int main() {
	int n;
	cout << "���� �Է�(1�̻�): ";
	cin >> n;


	int ret = factorial(n);
	if (ret == FACT_ERROR)
		cout << "�Է� ����" << endl;
	else
		cout << n << "! = " << ret << endl;
	
	return 0;
}
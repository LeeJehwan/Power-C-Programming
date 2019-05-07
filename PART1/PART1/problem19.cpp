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
	cout << "숫자 입력(1이상): ";
	cin >> n;


	int ret = factorial(n);
	if (ret == FACT_ERROR)
		cout << "입력 오류" << endl;
	else
		cout << n << "! = " << ret << endl;
	
	return 0;
}
#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "�ڿ��� �Է�: ";
	cin >> n;

	int odd = 0;
	int even = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 2)
			odd += i;
		else
			even += i;
	}
	cout << n << "���� Ȧ�� ��: " << odd << endl;
	cout << n << "���� ¦�� ��: " << even << endl;

	return 0;
}
#include <stdio.h>
#include <iostream>
using namespace std;

void swap(int &n1, int &n2) {
	int tmp = n1;
	n1 = n2;
	n2 = tmp;
}

int main() {
	int n1, n2;
	cout << "�� ���� ���� �Է�: ";
	cin >> n1 >> n2;

	cout << n1 << "�� " << n2 << "�� �����Ͽ� �� ���̿� �ִ� �������� ��: ";
	if (n1 > n2)
		swap(n1, n2);

	int sum = 0;
	for (int i = n1; i <= n2; i++) {
		sum += i;
	}
	cout << sum << endl;

	return 0;
}
#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int n;
	while (1) {
		cout << "2 �̻� �Է�: ";
		cin >> n;
		if (n > 1)
			break;
		cout << "2 �̻��� �Է��ϼ���" << endl;
	}

	int sum = 0;
	int idx = 1;
	while (1) {
		sum += idx;
		if (sum > n)
			break;
		idx++;
	}
	cout << idx << "�� ���� �� ó��" << n << "�� �ѱ� �����Ѵ�" << endl;
	cout << n << "�� �ѱ� ������ ��: " << sum - idx << endl;
	cout << n << "�� ���� ������ ��: " << sum << endl;

	return 0;
}
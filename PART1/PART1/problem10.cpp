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
	int s1, s2;
	s1 = n1, s2 = n2;

	if (s1 > s2)
		swap(s1, s2);

	int sum = 0;
	for (int i = s1; i <= s2; i++) {
		if (!(i % 3) || !(i % 5)) {
			cout << i << "�� �տ��� ����" << endl;
			continue;
		}
		sum += i;
	}
	cout << n1 << "�� " << n2 << "�� �����Ͽ� �� ���̿� �ִ� �������� ��: ";
	cout << sum << endl;

	return 0;
}
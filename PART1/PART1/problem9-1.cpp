#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int n;
	while (1) {
		cout << "1 �̻��� ���� �Է�: ";
		cin >> n;
		if (n > 0)
			break;
		cout << "1 �̻��� ������ �Է��ؾ� �մϴ�." << endl;
	}
	
	long long sum = (n * (n + 1)) / 2;
	cout << "1���� " << n << "������ ���� " << sum << endl;
	return 0;
}
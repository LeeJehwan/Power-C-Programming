#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	while (1) {
		int n;
		cout << "1 �̻��� ���� �Է�: ";
		int eof = scanf("%d", &n);
		if (eof == EOF) {
			cout << "EOF �Է¿� ���� ���α׷��� �����մϴ�." << endl;
			break;
		}
		if (n < 1) {
			cout << "1 �̻��� �Է��� �ʿ�� �մϴ�. �ٽ� �Է��ϼ���." << endl << endl;
			continue;
		}
		cout << n << "�� �����" << endl;
		for (int i = 1; i <= n; i++) {
			if (n%i == 0)
				cout << i << " ";
		}
		cout << endl;
		cout << endl;

	}
	

	return 0;
}
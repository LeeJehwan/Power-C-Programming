#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int n;
	while (1) {
		cout << "Ȧ�� ��(1), ¦�� ��(2): ";
		cin >> n;
		if (n == 1 || n == 2)
			break;
		cout << "�߸��� �Է��Դϴ�. 1 �Ǵ� 2�� �Է��ϼ���." << endl << endl;
	}

	for (int i = 2; i <= 9; i++) {
		if (n % 2 != i % 2)
			continue;
		for (int j = 1; j <= 9; j++) {
			
			printf("%d X %d = %d\n", i, j, i*j);
		}
		cout << endl;
	}


	return 0;
}
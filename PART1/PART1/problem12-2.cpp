#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "정수 입력: ";
	cin >> n;
	for (int i = 0; i <= 100; i++) {
		for (int j = 0; j <= 100; j++) {
			for (int k = 0; k <= 100; k++) {
				if (i*j - k == n) {
					printf("(%d) X (%d) - (%d) = (%d)\n", i, j, k, n);
				}
			}
		}
	}

	return 0;
}
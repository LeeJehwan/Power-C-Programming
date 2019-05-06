#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	while (1) {
		int n;
		cout << "1 이상의 정수 입력: ";
		int eof = scanf("%d", &n);
		if (eof == EOF) {
			cout << "EOF 입력에 의해 프로그램을 종료합니다." << endl;
			break;
		}
		if (n < 1) {
			cout << "1 이상의 입력을 필요로 합니다. 다시 입력하세요." << endl << endl;
			continue;
		}
		cout << n << "의 약수들" << endl;
		for (int i = 1; i <= n; i++) {
			if (n%i == 0)
				cout << i << " ";
		}
		cout << endl;
		cout << endl;

	}
	

	return 0;
}
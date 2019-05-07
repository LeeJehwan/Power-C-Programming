#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	char str[256];
	cout << "문자열 입력: ";
	fgets(str, sizeof(str), stdin);

	for (int i = 0; i != '\n'; i++) {
		char t = str[i];
		if (t == '\n')
			break;
		if (t >= 'a' && t <= 'z') {
			t -= ('a' - 'A');
		}
		else if (t >= 'A' && t <= 'Z') {
			t += ('a' - 'A');
		}
		cout << t;
	}
	cout << endl;

	

	return 0;
}
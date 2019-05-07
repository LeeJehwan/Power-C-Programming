#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	cout << "문자열 입력: ";
	
	while (1) {
		char t = getchar();
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
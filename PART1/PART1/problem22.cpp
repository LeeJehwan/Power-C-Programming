#include <iostream>
using namespace std;

int count_str(char* str, char s) {
	int count = 0;
	int idx = 0;
	while (str[idx]) {
		if (str[idx++] == s)
			count++;
	}
	return count;
}

int main() {
	char str[100];
	cout << "대상 문자열 입력: ";
	fgets(str, sizeof(str), stdin);

	char s;
	cout << "세어 볼 문자 입력: ";
	cin >> s;

	cout << s << "의 개수: " << count_str(str, s) << endl;
	return 0;
}
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
	cout << "��� ���ڿ� �Է�: ";
	fgets(str, sizeof(str), stdin);

	char s;
	cout << "���� �� ���� �Է�: ";
	cin >> s;

	cout << s << "�� ����: " << count_str(str, s) << endl;
	return 0;
}
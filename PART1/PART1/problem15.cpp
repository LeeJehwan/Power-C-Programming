#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	while (1) {
		char n;

		if (scanf("%c", &n) == EOF)
			break;
		else if ('a' <= n && n <= 'z')
			cout << "입력하신 문자는 알파벳 소문자입니다." << endl;
		else if ('A' <= n && n <= 'Z')
			cout << "입력하신 문자는 알파벳 대문자입니다." << endl;
		else if ('0' <= n && n <= '9')
			cout << "입력하신 문자는 아라비아숫자입니다." << endl;
		else
			cout << "특수문자를 입력하셨군요." << endl;
		
		while (getchar() != '\n');
	}

	cout << "프로그램을 종료합니다." << endl;
	return 0;
}
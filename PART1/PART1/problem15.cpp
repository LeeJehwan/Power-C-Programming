#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	while (1) {
		char n;

		if (scanf("%c", &n) == EOF)
			break;
		else if ('a' <= n && n <= 'z')
			cout << "�Է��Ͻ� ���ڴ� ���ĺ� �ҹ����Դϴ�." << endl;
		else if ('A' <= n && n <= 'Z')
			cout << "�Է��Ͻ� ���ڴ� ���ĺ� �빮���Դϴ�." << endl;
		else if ('0' <= n && n <= '9')
			cout << "�Է��Ͻ� ���ڴ� �ƶ��Ƽ����Դϴ�." << endl;
		else
			cout << "Ư�����ڸ� �Է��ϼ̱���." << endl;
		
		while (getchar() != '\n');
	}

	cout << "���α׷��� �����մϴ�." << endl;
	return 0;
}
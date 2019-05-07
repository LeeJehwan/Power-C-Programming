#include <iostream>
#include <stdio.h>
using namespace std;

int strlen(char * str) {
	int cnt = 0;
	while (str[cnt] != '\0') {
		cnt++;
	}
	return cnt;
}

void strcpy(char * str1, char * str2) {
	int idx = 0;
	while (str2[idx] != '\0') {
		str1[idx] = str2[idx];
		idx++;
	}
	str1[idx] = '\0';
}

void swap_str(char *str1, char* str2) {
	char tmp[20];
	strcpy(tmp, str1);
	strcpy(str1, str2);
	strcpy(str2, tmp);
}

int main() {
	char str[5][20];

	for (int i = 0; i < 5; i++) {
		cout << "문자열 입력 " << i + 1 << ": ";
		cin >> str[i];
	}
	
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4 - i; j++) {
			if (strlen(str[j]) > strlen(str[j + 1]))
				swap_str(str[j], str[j + 1]);
		}
	}

	for (int i = 0; i < 5; i++)
		cout << str[i] << endl;

	return 0;
}
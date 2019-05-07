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

int strcmp(char * str1, char * str2) {
	int idx = 0;
	while (str1[idx]) {
		if (str1[idx] != str2[idx])
			break;
		idx++;
	}
	return str1[idx] - str2[idx];
}

void strcat(char* str1, char* str2) {
	int len = strlen(str1);
	if(len != 0)
		str1[len++] = ' ';
	int idx = 0;
	while(str2[idx]){
		str1[len++] = str2[idx++];
	}
	str1[len] = '\0';
}

int main() {
	char str1[20], str2[20], str3[20], str4[20];
	char str[80] = "";

	char* pstr[4] = { str1, str2, str3, str4 };
	for (int i = 0; i < 4; i++){
		cout << "문자열 입력 " << i+1 << ": ";
		cin >> pstr[i];
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3 - i; j++) {
			if (strcmp(pstr[j], pstr[j + 1]) > 0) {
				swap_str(pstr[j], pstr[j + 1]);
			}
		}
	}

	for (int i = 0; i < 4; i++) {
		strcat(str, pstr[i]);
	}

	cout << "정렬된 문자열: ";
	cout << str << endl;

	return 0;
}
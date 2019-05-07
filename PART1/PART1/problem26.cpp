#include <iostream>
using namespace std;

int my_strlen(char * str);
void my_swap(char ** str1, char ** str2);
int ExtendString(char ** pstr, int strlen);
char * readString(void);
void sortString(char * strArr[5]);
void my_strcpy(char * str1, char * str2);

int main() {
	char* pstr[5];

	for (int i = 0; i < 5; i++) {
		cout << "문자열 입력 " << i + 1 << ": ";
		pstr[i] = readString();
	}

	sortString(pstr);

	for (int i = 0; i < 5; i++) {
		cout << pstr[i] << endl;
	}

	for (int i = 0; i < 5; i++) {
		free(pstr[i]);
	}

	return 0;
}

int ExtendString(char ** pstr, int strlen) {
	char * newStr = (char*)malloc(sizeof(char)*strlen * 2);

	for (int z = 0; z < strlen; z++)
		newStr[z] = (*pstr)[z];

	free(*pstr);
	*pstr = newStr;
	return strlen * 2;
}

char * readString(void) {
	int size = 5;
	char* str = (char*)malloc(size * sizeof(char));

	int idx = 0;
	while (1) {
		if (idx == size) {
			size = ExtendString(&str, size);
		}

		char ch = getchar();
		if (ch == '\n')
			break;

		str[idx++] = ch;
	}
	str[idx] = '\0';
	return str;
}

void my_strcpy(char * str1, char * str2) {
	int idx = 0;
	while (str2[idx]) {
		str1[idx] = str2[idx];
		idx++;
	}
	str1[idx] = 0;
}

void sortString(char * strArr[5]) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4 - i; j++) {
			if (my_strlen(strArr[j]) > my_strlen(strArr[j + 1]))
				my_swap(&strArr[j], &strArr[j + 1]);
		}
	}
}

int my_strlen(char * str) {
	int idx = 0;
	while (str[idx++]);
	return idx - 1;
}

void my_swap(char ** str1, char ** str2) {
	char* tmp = *str1;
	*str1 = *str2;
	*str2 = tmp;
}
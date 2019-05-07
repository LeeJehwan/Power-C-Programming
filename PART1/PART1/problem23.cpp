#include <iostream>
using namespace std;
#define STR_MAX 100

int strLen(char * str) {
	int idx = 0;
	while (str[idx++]);
	return idx-1;
}

int strCpy(char * dest, char * source) {
	int idx = 0;
	while (source[idx]) {
		dest[idx] = source[idx];
		idx++;
	}
	dest[idx] = '\0';
	return idx;
}

int strCat(char * dest, char * source) {
	int idx = strLen(dest);
	int idx2 = 0;
	while (source[idx2]) {
		dest[idx++] = source[idx2++];
	}
	dest[idx] = '\0';
	return idx;
}

int strCmp(char * str1, char * str2) {
	int idx = 0;
	while (str1[idx]) {
		if (str1[idx] != str2[idx])
			break;
		idx++;
	}
	int diff = str1[idx] - str2[idx];
	if (diff > 0)
		return 1;
	else if (diff < 0)
		return -1;
	else
		return diff;
}

int main() {
	char str1[STR_MAX] = "Good morning?";
	char str2[STR_MAX] = "HaHaHa!";
	char bufferString[STR_MAX];

	//strlen test
	printf("length of \"%s\" : %d \n", str1, strLen(str1));
	printf("length of \"%s\" : %d \n", str2, strLen(str2));

	//srtcpy test
	strCpy(bufferString, str1);
	printf("copy string : \"%s\" \n", bufferString);

	//strcat test
	strCat(bufferString, str2);
	printf("concat string: \"%s\" \n", bufferString);

	//strcmp test
	printf("cmp str1, str1 : %d \n", strCmp(str1, str1));
	printf("cmp str2, str2 : %d \n", strCmp(str2, str2));
	printf("cmp str1, str2 : %d \n", strCmp(str1, str2));
	printf("cmp str2, str1 : %d \n", strCmp(str2, str1));
	return 0;
}
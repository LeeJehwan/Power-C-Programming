#include <iostream>
using namespace std;

char * my_strtok(char *str, char * del) {
	static char * nextTokenPos;
	char * curTokenPos;
	char * curStrPos;

	if (str != NULL) {
		curTokenPos = str;
		curStrPos = str;
		nextTokenPos = (char*)-1;
	}
	else {
		curTokenPos = nextTokenPos;
		curStrPos = nextTokenPos;
	}
	if (curTokenPos == NULL)
		return NULL;

	while (1) {
		if (*curStrPos == 0) {
			nextTokenPos = NULL;
			break;
		}
		if (*curStrPos == del[0]) {
			*curStrPos = 0;
			nextTokenPos = curStrPos + 1;
			break;
		}
		curStrPos++;
	}
	return curTokenPos;
}

int main() {
	char str[] = "111-2222-3333";
	char delim[] = "-";
	char * token;

	token = my_strtok(str, delim);

	while (token != NULL) {
		puts(token);
		token = my_strtok(NULL, delim);
	}
}
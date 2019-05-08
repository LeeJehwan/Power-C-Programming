#include <iostream>
using namespace std;

int main() {
	char title[3][50];
	char publisher[3][50];
	int price[3];
	for (int i = 0; i < 3; i++) {
		cout << "******* 도서 정보 입력 *******" << endl;
		cout << i + 1 << "번째 도서 정보 입력." << endl;
		cout << "도서 제목: ";
		fgets(title[i], sizeof(title[i]), stdin);
		cout << "출판사 명: ";
		fgets(publisher[i], sizeof(publisher[i]), stdin);
		cout << "도서 가격: ";
		cin >> price[i];
		cout << i + 1 << "번째 입력 완료......" << endl << endl;
		while(getchar()!='\n');
	}

	for (int i = 0; i < 3; i++) {
		cout << "******* 도서 정보 출력 *******" << endl;
		cout << i + 1 << "번째 도서 정보 출력." << endl;
		cout << "도서 제목: ";
		cout << title[i];
		cout << "출판사 명: ";
		cout << publisher[i];
		cout << "도서 가격: ";
		cout << price[i] << endl;
	}


}
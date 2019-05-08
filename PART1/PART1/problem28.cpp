#include <iostream>
using namespace std;

#define STR_LEN 50
#define BOOK_INFO_NUM 3

struct bookInfo {
	char bookTitle[STR_LEN];
	char bookPub[STR_LEN];
	int bookPrice;
};

int main() {
	bookInfo book[3];

	for (int i = 0; i < BOOK_INFO_NUM; i++) {
		cout << "******* 도서 정보 입력 *******" << endl;
		cout << i + 1 << "번째 도서 정보 입력." << endl;
		cout << "도서 제목: ";
		fgets(book[i].bookTitle, sizeof(book[i].bookTitle), stdin);
		cout << "출판사 명: ";
		fgets(book[i].bookPub, sizeof(book[i].bookPub), stdin);
		cout << "도서 가격: ";
		cin >> book[i].bookPrice;
		cout << i + 1 << "번째 입력 완료......" << endl << endl;
		while (getchar() != '\n');
	}

	for (int i = 0; i < BOOK_INFO_NUM; i++) {
		cout << "******* 도서 정보 출력 *******" << endl;
		cout << i + 1 << "번째 도서 정보 출력." << endl;
		cout << "도서 제목: ";
		cout << book[i].bookTitle;
		cout << "출판사 명: ";
		cout << book[i].bookPub;
		cout << "도서 가격: ";
		cout << book[i].bookPrice << endl << endl;
	}

	return 0;
}
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
		cout << "******* ���� ���� �Է� *******" << endl;
		cout << i + 1 << "��° ���� ���� �Է�." << endl;
		cout << "���� ����: ";
		fgets(book[i].bookTitle, sizeof(book[i].bookTitle), stdin);
		cout << "���ǻ� ��: ";
		fgets(book[i].bookPub, sizeof(book[i].bookPub), stdin);
		cout << "���� ����: ";
		cin >> book[i].bookPrice;
		cout << i + 1 << "��° �Է� �Ϸ�......" << endl << endl;
		while (getchar() != '\n');
	}

	for (int i = 0; i < BOOK_INFO_NUM; i++) {
		cout << "******* ���� ���� ��� *******" << endl;
		cout << i + 1 << "��° ���� ���� ���." << endl;
		cout << "���� ����: ";
		cout << book[i].bookTitle;
		cout << "���ǻ� ��: ";
		cout << book[i].bookPub;
		cout << "���� ����: ";
		cout << book[i].bookPrice << endl << endl;
	}

	return 0;
}
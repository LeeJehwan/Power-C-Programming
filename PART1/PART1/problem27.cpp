#include <iostream>
using namespace std;

int main() {
	char title[3][50];
	char publisher[3][50];
	int price[3];
	for (int i = 0; i < 3; i++) {
		cout << "******* ���� ���� �Է� *******" << endl;
		cout << i + 1 << "��° ���� ���� �Է�." << endl;
		cout << "���� ����: ";
		fgets(title[i], sizeof(title[i]), stdin);
		cout << "���ǻ� ��: ";
		fgets(publisher[i], sizeof(publisher[i]), stdin);
		cout << "���� ����: ";
		cin >> price[i];
		cout << i + 1 << "��° �Է� �Ϸ�......" << endl << endl;
		while(getchar()!='\n');
	}

	for (int i = 0; i < 3; i++) {
		cout << "******* ���� ���� ��� *******" << endl;
		cout << i + 1 << "��° ���� ���� ���." << endl;
		cout << "���� ����: ";
		cout << title[i];
		cout << "���ǻ� ��: ";
		cout << publisher[i];
		cout << "���� ����: ";
		cout << price[i] << endl;
	}


}
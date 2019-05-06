#include <stdio.h>
#include <iostream>
using namespace std;

void swap(int &n1, int &n2) {
	int tmp = n1;
	n1 = n2;
	n2 = tmp;
}

int main() {
	int arr[5];
	for (int i = 0; i < 5; i++) {
		cout << "숫자 " << i + 1 << "입력: ";
		cin >> arr[i];
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5 - i - 1; j++) {
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
		}
	}

	for (int i = 0; i < 5; i++)
		cout << arr[i] << " ";
	cout << endl;

	return 0;
}
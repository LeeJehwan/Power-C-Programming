#include <iostream>
using namespace std;

void SortArr(int * arr, int num);
void ReadAndSortPrint(int number);
void swap(int &a, int &b);

int main() {
	int num; 
	cout << "�Է��� ������ ����: ";
	cin >> num;

	ReadAndSortPrint(num);
	return 0;
}

void swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void SortArr(int * arr, int num) {
	for (int i = 0; i < num - 1; i++) {
		for (int j = 0; j < num - i - 1; j++) {
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
		}
	}
}

void ReadAndSortPrint(int number) {
	int * arr = (int *)malloc(number * sizeof(int));

	for (int i = 0; i < number; i++) {
		cout << i + 1 << " ��° �Է�: ";
		cin >> arr[i];
	}

	SortArr(arr, number);
	
	cout << "�Էµ� ������ ���ĵ� ���" << endl;
	for (int i = 0; i < number; i++)
		cout << arr[i] << " ";
	cout << endl;

	free(arr);
}

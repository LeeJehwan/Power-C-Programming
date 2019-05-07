#include <iostream>
using namespace std;

void sum_array1(int (*arr)[2], int len) {
	int sum = 0;
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < 2; j++) {
			cout << arr[i][j];
			sum += arr[i][j];
			if (i == len - 1 && j == 1)
				break;
			cout << ", ";
		}
	}
	cout << "의 합: ";
	cout << sum << endl;
}

void sum_array2(int (*arr)[3], int len) {
	int sum = 0;
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j];
			sum += arr[i][j];
			if (i == len - 1 && j == 2)
				break;
			cout << ", ";
		}
	}
	cout << "의 합: ";
	cout << sum << endl;
}

int main() {
	int arr1[2][2] = { 1, 3, 5, 7 };
	int arr2[2][3] = { 1, 2, 3, 4, 5, 6 };

	sum_array1(arr1, 2);
	sum_array2(arr2, 2);

	return 0;
}
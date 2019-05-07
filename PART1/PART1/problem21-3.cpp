#include <iostream>
using namespace std;

void sum_array(int* arr, int len) {
	int sum = 0;
	for (int i = 0; i < len; i++) {
		cout << arr[i];
		sum += arr[i];
		if (i == len - 1)
			break;
		cout << ", ";
	}
	cout << "ÀÇ ÇÕ: ";
	cout << sum << endl;
}

int main() {
	int arr1[2][2] = { 1, 3, 5, 7 };
	int arr2[2][3] = { 1, 2, 3, 4, 5, 6 };

	sum_array((int*)arr1, sizeof(arr1) / sizeof(int));
	sum_array((int*)arr2, sizeof(arr2) / sizeof(int));

	return 0;
}
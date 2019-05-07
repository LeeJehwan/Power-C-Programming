#include <iostream>
using namespace std;

void sum_array(int arr[], int len) {
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
	int arr1[3] = { 5, 10,15 };
	int arr2[5] = { 1,2,3,4,5 };
	
	sum_array(arr1, sizeof(arr1)/sizeof(arr1[0]));
	sum_array(arr2, sizeof(arr2) / sizeof(arr2[0]));

	return 0;
}
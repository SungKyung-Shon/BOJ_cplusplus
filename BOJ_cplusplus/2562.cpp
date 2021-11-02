#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<iostream>
using namespace std;
int main() {
	int *arr = new int[9];
	int max = arr[1];
	int num = 0;
	for (int i = 1; i < 10; i++) {
		cin >> arr[i];
		if (arr[i] > max) {
			max = arr[i];
			num = i;
		}
	}
	cout << max << "\n" << num;
}
#endif
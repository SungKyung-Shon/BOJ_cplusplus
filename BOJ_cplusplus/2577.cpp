#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<iostream>
using namespace std;
int main() {
	int a, b, c,num;
	int arr[10] = { 0 };
	cin >> a >> b >> c;
	num = a * b * c;
	while (num != 0) {
		arr[num % 10] += 1;
		num /= 10;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
	return 0;
	
}
#endif
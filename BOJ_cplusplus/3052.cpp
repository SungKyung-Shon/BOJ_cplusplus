#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<iostream>
using namespace std;
int main() {
	int num;
	int count = 0;
	int arr[42] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		cin >> num;
		arr[num % 42] += 1;
	}
	for (int i = 0; i < 42; i++)
	{
		if (arr[i] != 0)
			count++;
	}
	cout << count << endl;
}
#endif
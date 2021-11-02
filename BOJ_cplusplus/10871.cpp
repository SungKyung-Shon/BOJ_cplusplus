#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<iostream>
using namespace std;
int main() {
	int n,x;
	cin >> n >> x;
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >>arr[i];
		if (arr[i] < x)
			printf("%d ", arr[i]);
	}
	return 0;
}
#endif
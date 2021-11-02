#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<iostream>
using namespace std;
int main() {
	int n; 
	double result=0;
	cin >> n;
	int *arr = new int[n];
	int m = arr[0];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
		if (arr[i] > m) 
			m = arr[i];
		result += arr[i];
	}
	result = (result / m * 100) / n;

	printf("%.6f", result);
}
#endif
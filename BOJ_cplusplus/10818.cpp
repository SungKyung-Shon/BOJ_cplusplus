#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<iostream>
using namespace std;
int main() {
	int n;
	int max = -1000000;
	int min=1000000;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int k;
		cin >>k;
		if (k > max)
			max = k;
		if (k < min)
			min = k;
	}
	cout << min << " " << max;
}
#endif
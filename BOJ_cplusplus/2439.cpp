#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j =1; j <=n-i ; j++)
		{
			cout << ' ';
		}
		for (int j = 1; j <= i; j++)
		{
			cout << '*';
		}
		cout << "\n";
	}
	return 0;
}
#endif
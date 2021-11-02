#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<iostream>
using namespace std;
int main() {
	int n,k=1;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		k *= i;
	}
	cout << k << endl;
}
#endif
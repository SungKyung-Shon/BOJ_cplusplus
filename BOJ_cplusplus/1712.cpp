#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (b >= c)
		cout << "-1";
	else
		cout << a / (c - b)+1 << endl;
}
#endif
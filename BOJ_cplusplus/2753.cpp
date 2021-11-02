#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<iostream>
using namespace std;
int main() {
	int y;
	cin >> y;
	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
		cout << "1" << endl;
	else
		cout << "0" << endl;
	return 0;
}
#endif
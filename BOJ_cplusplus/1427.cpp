#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	string str;
	cin >> str;
	sort(str.begin(), str.end(), greater<char>());
	cout << str;
}
#endif
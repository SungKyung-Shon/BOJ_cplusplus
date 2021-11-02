#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<cstdio>
using namespace std;
int main() {
	int n;
	scanf("%d",&n);

	int temp = n;
	int a,b;
	int result = 0;

	do {
		a = temp % 10;
		b = temp / 10 + a;
		b %= 10;
		temp = a * 10 + b;
		result++;
	} while (temp != n);

	printf("%d\n", result);
	return 0;
}
#endif
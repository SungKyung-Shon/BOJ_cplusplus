#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<cstdio>
using namespace std;
int main() {
	int n, arr[10000] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		int k;
		scanf("%d", &k);
		arr[k-1]++;
	}
	for (int i = 0; i < 10000; i++)
	{
		for (int j = 0; j < arr[i]; j++)
		{
			printf("%d\n",i+1);
		}
	}
	return 0;
}
#endif
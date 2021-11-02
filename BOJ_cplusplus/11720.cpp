#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<cstdio>
using namespace std;
int main() {
	int n,k,sum=0;
	scanf("%d",&n);
	for (int i = 0; i < n; i++)
	{
		scanf("%1d", &k);
		sum += k;
	}
	printf("%d",sum);
}
#endif
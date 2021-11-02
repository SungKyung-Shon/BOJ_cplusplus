#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<cstdio>
#include<utility>
#include<algorithm>
using namespace std;

int main() {
	int n,x,y;
	pair<int, int> C[100000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d",&x,&y);
		C[i] = pair<int, int>(x, y);
	}
	sort(C, C+ n);
	for (int i = 0; i < n; i++)
	{
		printf("%d %d\n", C[i].first, C[i].second);
	}
	return 0;
}
#endif
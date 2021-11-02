#define _CRT_SECURE_NO_WARNINGS
#if 0
#include <cstdio>
#include <utility>
#include <algorithm>
using namespace std;
int main() {
	int n, x, y;
	pair<int, int> P[100000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%d %d", &x, &y);
		P[i] = pair<int, int>(y, x);
	}
	sort(P, P + n);
	for (int i = 0; i < n; i++){
		printf("%d %d\n", P[i].second, P[i].first);
	}
	return 0;
}
#endif
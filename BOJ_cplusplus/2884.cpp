#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<cstdio>
using namespace std;
int main() {
	int h, m;
	scanf("%d %d",&h,&m);
	if (m < 45) {
		h -= 1;
		m += 15; //m+60-45
		if (h < 0) {
			h += 24;
		}
		printf("%d %d", h, m);
	}
	else {
		if (h < 0) {
			h += 24;
		}
		printf("%d %d", h, m - 45);
	}
	return 0;
}
#endif
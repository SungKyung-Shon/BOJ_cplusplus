#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<iostream>
using namespace std;
int main() {
	int x, y;
	cin >> x >> y;
	if (x > 0) {
		if(y>0)
			puts("1");
		else
			puts("4");v
	}
	else {
		if (y > 0)
			puts("2");
		else
			puts("3");
	}
	return 0;	
}
#endif

#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<cstdio>
using namespace std;
int main() {
	int x, y;
	scanf("%d %d",&x,&y);
	printf("%d\n", (x > 0) ? (y > 0 ? 1 : 4) : (y > 0 ? 2 : 3));
}
#endif
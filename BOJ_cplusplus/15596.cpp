#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<vector>
using namespace std;
long long sum(vector<int> &a) {
	long long ans=0;
	for (int i = 0; i < a.size(); i++) {
		ans += a[i];
	}
	return ans;
}
#endif
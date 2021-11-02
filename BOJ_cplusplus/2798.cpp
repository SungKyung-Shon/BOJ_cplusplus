#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n, m,sum=0;
	cin >> n >> m;
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		sort(arr,arr+n,greater<int>); 
		cout << arr[i] << endl;
	}

	
	return 0;
}
#endif
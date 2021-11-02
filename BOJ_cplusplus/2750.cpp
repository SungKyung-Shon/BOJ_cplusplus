#define _CRT_SECURE_NO_WARNINGS
#if 0
#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++){
		for(int j=i+1;j<n;j++){
			if (arr[i] > arr[j]) {
				int temp;
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
	
}
#endif
#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <cmath>
#include <queue>
using namespace std;
long long int arr1[1005] = { 0 };
long long int arr2[1005] = { 0 };
long long int arr3[1005] = { 0 };

int main()
{
	long long int n = 0, k1 = 0, k2 = 0;
	cin >> n >> k1 >> k2;
	priority_queue<long long int> que;
	for (int i = 0; i < n; i++)
	{
		cin >> arr1[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> arr2[i];
	}
	for (int i = 0; i < n; i++)
	{
		arr3[i] = abs(arr1[i] - arr2[i]);
		que.push(arr3[i]);
	}
	for (int i = 0; i < k1 + k2; i++)
	{
		int k = que.top();
		que.pop();
		que.push(abs(k - 1));
	}
	long long int ans = 0;
	long long int temp = que.size();
	for (int i = 0; i < temp; i++)
	{
		ans += (que.top() * que.top());
		que.pop();
	}
	cout << ans;
	return 0;
}



#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;
long long int arr1[100006] = { 0 }, arr2[100007] = { 0 };
int main()
{
	long long int t = 0, n = 0;
	cin >> t >> n;
	for (int i = 1; i <= t; i++)
	{
		cin >> arr1[i];
	}
	for (int i = 1; i <= t + 1; i++)
	{
		arr2[i] = arr2[i - 1] + arr1[i] - arr1[i - 1] - 1;
	}
	while (n--)
	{
		long long int k = 0;
		cin >> k;
		long long int mid = 0;
		mid = lower_bound(arr2, arr2 + t + 1, k) - arr2;
		long long int ans = 0;
		k -= arr2[mid - 1];
		ans += (k + arr1[mid - 1]);
		cout << ans << endl;
	}

	return 0;
}


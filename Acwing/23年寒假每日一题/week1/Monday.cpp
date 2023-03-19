#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;
const int N = 5e5 + 10;
long long int L[N], R[N];
int main()
{
	string a;
	long long int n = 0;
	cin >> n >> a;
	long long int ans = 0, cnt = 1;
	for (long long int i = 1; i < a.length(); i++)
	{
		if (a[i - 1] == a[i])
		{
			cnt++;
		}
		else
		{
			L[i] = cnt;
			cnt = 1;
		}
	}
	for (long long int i = n - 2, cnt = 1; i >= 0; i--) 
	{
		if (a[i] == a[i + 1])
		{
			cnt++;
		}
		else
		{
			R[i] = cnt, cnt = 1;
		}
	}
	for (int i = 0; i < n; i++) 
	{
		ans += L[i] * R[i] + max(L[i] - 1, 0LL) + max(R[i] - 1, 0LL);
	}
	cout << ans << endl;
	return 0;
}


#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
const int N = 1e5 + 5;
long long int arr[N];
long long int sum[N];
int l[N], l2, r;
int main()
{
	int n = 0;
	cin >> n;
	stack <long long int> st;
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &arr[i]);
		sum[i] = sum[i - 1] + arr[i];
	}
	long long int ans = -11;
	for (int i = 1; i <= n; i++)
	{
		while (!st.empty() && arr[st.top()] > arr[i])
		{
			
			long long temp = arr[st.top()] * (sum[i - 1] - sum[l[st.top()]]);
			if (temp > ans)
			{
				ans = temp;
				l2 = l[st.top()];
				r = i - 1;
			}
			st.pop();
		}
		if (st.empty())
		{
			l[i] = 0;
		}
		else
		{
			l[i] = st.top();
		}
		st.push(i);
	}
	cout << ans << endl;
	//cout << l2 + 1 << ' ' << r;

	return 0;
}


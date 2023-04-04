#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <stack>
using namespace std;
const int N = 1e5 + 5;
long long int arr[N], sum[N], n;
int l[N];
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &arr[i]);
		sum[i] = sum[i - 1] + arr[i];
	}
	stack<int> st;
	long long int ans = 0;
	for (int i = 1; i <= n; i++)
	{ 
		while (!st.empty() && arr[st.top()] >= arr[i])
		{
			long long int temp = (sum[i - 1] - sum[l[st.top()]]) * arr[st.top()];
			ans = max(ans, temp);
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
	while (!st.empty())
	{
		long long int temp = (sum[n] - sum[l[st.top()]]) * arr[st.top()];
		ans = max(ans, temp);
		st.pop();
	}
	/*for (int i = 1; i <= n; i++)
	{
		long long int temp = (sum[i] - sum[l[i]]) * arr[i];
		ans = max(ans, temp);
	}*/
	cout << ans;

	return 0;
}


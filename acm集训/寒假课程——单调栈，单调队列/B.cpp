#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
const int N = 1e6 + 5;
long long int arr[N];
long long int sum[N];
long long int l[N], l2, r;
int main()
{
	int n = 0;
	while (!scanf("%d", &n))
	{
		stack <long long int> st;
		for (int i = 1; i <= n; i++)
		{
			scanf("%lld", &arr[i]);
			sum[i] = sum[i - 1] + arr[i];
		}
		arr[n + 1] = -1;
		long long int ans = -11;
		for (long long int i = 1; i <= n + 1; i++)
		{
			while (!st.empty() && arr[st.top()] > arr[i])
			{

				long long temp = arr[st.top()] * (sum[i - 1] - sum[l[st.top()]]);
				if (temp >= ans)
				{
					ans = temp;
					l2 = l[st.top()] + 1LL;
					r = i - 1LL;
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
		printf("%lld\n%lld %lld\n", ans, l2, r);
	}

	return 0;
}


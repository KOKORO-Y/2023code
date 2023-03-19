#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int speed[114514] = { 0 };
void solve()
{
	long long int n = 0;
	cin >> n;
	long long int time1 = 0, time2 = 0;
	long long int ans = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> speed[i];
	}
	sort(speed, speed + n);
	priority_queue<int> st;
	for (int i = 0; i < n; i++)
	{
		st.push(speed[i]);
	}
	int k = n;
	long long int fastest = speed[0], faster = speed[1];
	while (k > 3)
	{
		time1 = 0, time2 = 0;
		time2 += (faster + fastest + st.top());
		time1 += st.top();
		st.pop();
		time1 += st.top();
		st.pop();
		time1 += 2 * fastest;
		time2 += faster;
		k -= 2;
		ans += min(time1, time2);
	}
	if (k == 2)
	{
		ans += faster;
		k -= 2;
	}
	else if (k == 3)
	{
		ans += st.top();
		st.pop();
		ans += fastest;
		ans += faster;
	}
	else if (k == 1)
	{
		ans = speed[0];
	}
	cout << ans << endl;
}

int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		solve();
	}

	return 0;
}


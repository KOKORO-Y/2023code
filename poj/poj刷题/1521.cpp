#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <cstring>
#include <string>
using namespace std;

int main()
{
	while (1)
	{
		priority_queue<int, vector<int>, greater<int>> que;
		string a;
		cin >> a;
		if (a.compare("END") == 0)
		{
			break;
		}
		sort(a.begin(), a.end());
		int num = 1;
		for (int i = 0; i < a.length(); i++)
		{
			if (a[i] != a[i + 1])
			{
				que.push(num);
				num = 1;
			}
			else
			{
				num++;
			}
		}
		int ans = 0;
		if (que.size() == 1)
		{
			ans = a.length();
		}
		while (que.size() > 1)
		{
			int a = que.top();
			que.pop();
			int b = que.top();
			que.pop();
			que.push(a + b);
			ans += (a + b);
		}
		que.pop();
		printf("%d %d %.1lf\n", a.length() * 8, ans, (double)(a.length() * 8) / ans);
	}

	return 0;
}


#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		priority_queue<int, vector<int>, greater<int>> que;
		int safe = 0;
		string a;
		cin >> safe >> a;
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
		if(que.size() == 1)
		{ 
			ans = que.top();
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
		if (ans <= safe)
		{
			cout << "yes\n";
		}
		else
		{
			cout << "no\n";
		}
	}

	return 0;
}


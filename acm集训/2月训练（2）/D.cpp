#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <deque>
using namespace std;
int ans[11451];
int main()
{
	int t = 0;
	cin >> t;
	int n = 0;
	while (t--)
	{
		deque<int> de;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			int x = 0;
			cin >> x;
			de.push_back(x);
		}
		for (int i = n; i > 0; i--)
		{
			int count = 0;
			while (de.back() != i)
			{
				int temp = de.front();
				de.pop_front();
				de.push_back(temp);
				count++;
			}
			ans[i] = count;
			de.pop_back();
		}
		for (int i = 1; i <= n; i++)
		{
			cout << ans[i] << ' ';
		}
		cout << endl;
	}

	return 0;
}


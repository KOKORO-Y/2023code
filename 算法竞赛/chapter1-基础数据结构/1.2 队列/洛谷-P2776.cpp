#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <queue>
using namespace std;
int index[100005];
int n, m;
int main()
{
	queue<int> que[1000];
	queue<int> qus;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> index[i];
	}
	int num = 0;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		string a;
		cin >> a;
		if (a == "push")
		{
			int x = 0;
			cin >> x;
			if (que[index[x]].empty())
			{
				qus.push(index[x]);
			}
			que[index[x]].push(x);

		}
		else
		{
			int temp = (que[qus.front()].front());
			cout << temp << endl;
			que[qus.front()].pop();
			if (que[qus.front()].empty())
			{
				qus.pop();
			}

		}
	}

	return 0;
}


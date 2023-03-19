#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <algorithm>

using namespace std;
struct ttt
{
	int l;
	int r;
}a[114514];
int cmp(const void* e1, const void* e2)
{
	return (((struct ttt*)e1)->r) - (((struct ttt*)e2)->r);
}
int main()
{
	int t = 0;
	while (cin >> t && t != 0)
	{
		for (int i = 0; i < t; i++)
		{
			cin >> a[i].l >> a[i].r;
		}
		qsort(a, t, sizeof(a[0]), cmp);
		int nowr = a[0].r;
		int cnt = 1;
		for (int i = 1; i < t; i++)
		{
			if (a[i].l >= nowr)
			{
				cnt++;
				nowr = a[i].r;
			}
		}
		cout << cnt << endl;
	}

	return 0;
}


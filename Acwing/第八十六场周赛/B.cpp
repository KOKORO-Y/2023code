#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <map>
using namespace std;
long long int ans[1000005] = { 0 };
int main()
{
	map<long long int, int> m1; //hang
	map<long long int, int> m2; //lie
	long long int n = 0, m = 0;
	cin >> n >> m;
	long long int count = n * n;
	long long int hang = 0, lie = 0;
	long long int x, y;
	int flag_hang, flag_lie;
	scanf("%d%d", &x, &y);
	m1[x]++;
	m2[y]++;
	count = (count - (n + n - 1));
	//cout << count << endl;
	ans[0] = count;
	hang++;
	lie++;
	for (int i = 1; i < m; i++)
	{
		flag_hang = 1, flag_lie = 1;
		scanf("%d%d", &x, &y);
		m1[x]++, m2[y]++;
		if (m1[x] > 1)
		{
			flag_hang = 0;
		}
		if (m2[y] > 1)
		{
			flag_lie = 0;
		}
		if (flag_hang == 1 && flag_lie == 1)
		{
			count = (count - (n + n - 1 - hang - lie));
			//cout << (count) << "\n";
			ans[i] = count;
			hang++;
			lie++;
		}
		else if (flag_hang == 1 && flag_lie == 0)
		{
			count = (count - n + lie);
			//cout << (count) << "\n";
			ans[i] = count;
			hang++;
		}
		else if (flag_hang == 0 && flag_lie == 1)
		{
			count = (count - n + hang);
			//cout << (count) << "\n";
			ans[i] = count;
			lie++;
		}
		else if (flag_hang == 0 && flag_lie == 0)
		{
			ans[i] = count;
		}
	}
	for (int i = 0; i < m; i++)
	{
		printf("%lld ", ans[i]);
	}

	return 0;
}


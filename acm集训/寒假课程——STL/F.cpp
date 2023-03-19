//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <map>
//#include <algorithm>
//using namespace std;
//map<int, int> m;
//int times[200006] = { 0 }, dif[200006] = { 0 };
//int main()
//{
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		m.clear();
//		int n = 0, k = 0, cnt = 0, ans = 1e16;
//		cin >> n;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> k;
//			m[k]++;
//		}
//		for (auto it = m.begin(); it != m.end(); it++)
//		{
//			times[++cnt] = (it->second);
//		}
//		sort(times + 1, times + 1 + cnt);
//		for (int i = 1; i <= cnt; i++)
//		{
//			dif[i] = dif[i - 1] + times[i];
//		}
//		for (int i = 1; i <= cnt; i++)
//		{
//			ans = min(ans, dif[i - 1] + dif[cnt] - dif[i] - (cnt - i) * (times[i]));
//		}
//		cout << ans << endl;
//	}
//
//	return 0;
//}
//

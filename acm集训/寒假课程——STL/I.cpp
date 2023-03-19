//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <map>
//
//using namespace std;
//
//int main()
//{
//	int n = 0;
//	while (cin >> n && n != 0)
//	{
//		map <string, int> m;
//		string a, b;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> a >> b;
//			m[b] = 6;
//			if (m[a] != 6)
//			{
//				m[a] = 0;
//			}
//		}
//		int win = 0;
//		for (map<string, int>::iterator it = m.begin(); it != m.end(); it++)
//		{
//			if (it->second == 0)
//			{
//				win++;
//			}
//		}
//		if (win == 1)
//		{
//			cout << "Yes" << endl;
//		}
//		else
//		{
//			cout << "No" << endl;
//		}
//	}
//	return 0;
//}
//

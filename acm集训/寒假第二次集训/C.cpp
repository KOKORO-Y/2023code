//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cstring>
//#include <map>
//using namespace std;
//
//int main()
//{
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		map<string, int> m1;
//		map<string, int> m2;
//		int k = 0;
//		cin >> k;
//		int arr[4] = { 0 };
//		for (int i = 1; i <= 3 * k; i++)
//		{
//			char str[6] = { 0 };
//			cin >> str;
//			m1[str]++;
//			if (i <= k)
//			{
//				m2[str] += 1;
//			}
//			else if (i > k && i <= 2 * k)
//			{
//				m2[str] += 2;
//			}
//			else
//			{
//				m2[str] += 3;
//			}
//		}
//		for (map<string, int>::iterator it = m1.begin(); it != m1.end(); it++)
//		{
//			if (it->second == 1)
//			{
//				arr[m2[it->first]] += 3;
//			}
//			else if (it->second == 2)
//			{
//				if (m2[it->first] == 3)
//				{
//					arr[1] += 1;
//					arr[2] += 1;
//				}
//				else if (m2[it->first] == 4)
//				{
//					arr[1] += 1;
//					arr[3] += 1;
//				}
//				else if (m2[it->first] == 5)
//				{
//					arr[2] += 1;
//					arr[3] += 1;
//				}
//			}
//		}
//		cout << arr[1] << ' ' << arr[2] << ' ' << arr[3] << endl;
//
//	}
//
//	return 0;
//}
//

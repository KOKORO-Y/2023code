//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <list>
//using namespace std;
//
//int judge(list<int> head, int sz)
//{
//	list<int>::iterator it1 = head.begin();
//	list<int>::iterator it2;
//	list<int>::iterator temp_it;
//	int sz1 = sz, sz_now = 0, round = 0;
//	while (1)
//	{
//		it1 = head.begin();
//		temp_it = it1;
//		it2 = ++temp_it;
//		while (it2 != head.end())
//		{
//			if (*it1 < *it2)
//			{
//				list<int>::iterator temp = it1;
//				it1 = it2;
//				it2++;
//				head.erase(temp);
//			}
//			else
//			{
//				it1 = it2;
//				it2++;
//			}
//		}
//		round++;
//		sz_now = head.size();
//		if (sz1 == sz_now)
//		{
//			break;
//		}
//		sz1 = sz_now;
//	}
//	return round - 1;
//}
//
//int main()
//{
//	int n = 0, t = 0;
//	cin >> n;
//	list <int> lt;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> t;
//		lt.push_front(t);
//	}
//	/*for (list<int>::iterator it = lt.begin(); it != lt.end(); it++)
//	{
//		cout << *it << ' ';
//	}*/
//	int ans = judge(lt, n);
//	cout << ans;
//	return 0;
//}
//

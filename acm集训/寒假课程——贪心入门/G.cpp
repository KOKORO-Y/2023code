//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <iostream>
//#include <queue>
//#include <vector>
//#include <set>
//using namespace std;
//
//int main()
//{
//	long long int t = 0, k = 0;
//	cin >> t;
//	multiset <long long int> q;
//	long long int profit = 0;
//	for (int i = 0; i < t; i++)
//	{
//		cin >> k;
//		q.insert(k);
//		if (*q.begin() < k)
//		{
//			profit += k - *q.begin();
//			q.erase(q.begin());
//			q.insert(k);
//		}
//	}
//	cout << profit << endl;
//	return 0;
//}
//

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <queue>
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int t = 0;
//	cin >> t;
//	priority_queue<int, vector<int>,greater<int>> q;
//	for (int i = 0; i < t; i++)
//	{
//		int k = 0;
//		cin >> k;
//		q.push(k);
//	}
//	long long int sum = 0;
//	for (int i = 0; i < t - 1; i++)
//	{
//		int a = q.top();
//		q.pop();
//		int b = q.top();
//		q.pop();
//		int c = a + b;
//		q.push(c);
//		sum += c;
//	}
//	cout << sum << endl;
//	return 0;
//}
//

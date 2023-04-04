//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <queue>
//using namespace std;
//const int N = 1e4;
//bool isExist[N];
//int n, m;
//int main()
//{
//	cin >> n >> m;
//	queue<int> que;
//	int ans = 0;
//	for (int i = 0; i < m; i++)
//	{
//		int word = 0;
//		cin >> word;
//		if (!isExist[word])
//		{
//			ans++;
//			isExist[word] = 1;
//			que.push(word);
//			if (que.size() > n)
//			{
//				int temp = que.front();
//				isExist[temp] = 0;
//				que.pop();
//			}
//		}
//	}
//	cout << ans;
//	return 0;
//}
//

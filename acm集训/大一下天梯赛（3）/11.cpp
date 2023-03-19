//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//using namespace std;
//
//const int N = 100010;
//
//int vis[N], res[N];
//
//vector<int>v[N];
//
//int bfs(int x)
//{
//    queue<int>q;
//    int t;
//    q.push(x);
//    while (!q.empty()) 
//    {
//        t = q.front();
//        vis[t] = 1;
//        q.pop();
//        for (int i = 0; i < v[t].size(); i++)
//        {
//            if (!vis[v[t][i]])
//            {
//                q.push(v[t][i]);
//            }
//        }
//    }
//    return t;
//}
//
//int main() 
//{
//
//    int n;  cin >> n;
//    for (int i = 1; i <= n; i++) 
//    {
//
//        int k;  cin >> k;
//        while (k--) 
//        {
//            int x;  cin >> x;
//            v[i].push_back(x);
//            res[x] = 1;
//        }
//    }
//    int root = 1;
//    while (root <= n && res[root] != 0)
//    {
//        root++;
//    }
//    cout << bfs(root) << endl;
//    return 0;
//
//}
////int road_num[100005], road[100005][1005];
////int n = 0;
////int maxx = -1;
////int deep = 0;
////int ans = 0;
////int go(int n, int deep)
////{
////	int now = n;
////	if (road[n][0] == 0)
////	{
////		return now;
////	}
////	else
////	{
////		for (int i = 0; i < road_num[n]; i++)
////		{
////			int temp = go(road[n][i], deep + 1);
////			if (deep > maxx)
////			{
////				maxx = deep;
////				ans = temp;
////			}
////		}
////	}
////	return ans;
////}
////
////int main()
////{
////	cin >> n;
////	for (int i = 1; i <= n; i++)
////	{
////		int x = 0;
////		cin >> x;
////		road_num[i] = x;
////		if (x == 0)
////		{
////			road[i][0] = 0;
////		}
////		else
////		{
////			for (int j = 0; j < x; j++)
////			{
////				cin >> road[i][j];
////			}
////		}
////	}
////	int res = go(1, 1);
////	cout << res;
////	return 0;
////}
//

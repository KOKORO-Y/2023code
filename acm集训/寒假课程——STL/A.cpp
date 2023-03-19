//#define _CRT_SECURE_NO_WARNINGS 1
//#include<cstdio>
//#include<iostream>
//#include<algorithm>
//#include<string.h>
//using namespace std;
//struct node {
//	char num[100];
//	int s;
//}stu[1010];
//int score[110];
//int cnt;
//bool cmp(node x, node y)
//{
//	if (x.s > y.s) 
//		return true;
//	if (x.s == y.s && strcmp(x.num, y.num) < 0) 
//		return true;
//	return false;
//}
//int main()
//{
//	int N, M, G;
//	int id;
//	while (scanf("%d", &N), N)
//	{
//		cnt = 0;
//		scanf("%d%d", &M, &G);
//		for (int i = 1; i <= M; i++)
//		{
//			scanf("%d", &score[i]);
//		}
//		int m;
//		for (int i = 0; i < N; i++)
//		{
//			scanf("%s", stu[i].num);
//			stu[i].s = 0;
//			scanf("%d", &m);
//			for (int j = 0; j < m; j++)
//			{
//				scanf("%d", &id);
//				stu[i].s += score[id];
//			}
//			if (stu[i].s >= G)
//			{
//				cnt++;
//			}
//		}
//
//		sort(stu, stu + N, cmp);
//		cout << cnt << endl;
//		for (int i = 0; i < cnt; i++)
//		{
//			printf("%s %d\n", stu[i].num, stu[i].s);
//		}
//	}
//}
//
////#include <iostream>
////#include <map>
////#include <stack>
////#include <queue>
////#include <algorithm>
////#include <cstring>
////
////using namespace std;
////struct tnnd
////{
////	char name[22];
////	int score;
////}ss[1010];
////bool cmp(const tnnd& a, const tnnd& b)
////{
////	if (a.score != b.score)
////	{
////		return a.score > b.score;
////	}
////	else
////	{
////		return a.name < b.name;
////	}
////}
////int main()
////{
////	int person = 0;
////	while (cin >> person, person)
////	{
////			int M = 0, line = 0;
////			cin >> M >> line;
////			int fenshu[15] = { 0 };
////			for (int i = 1; i <= M; i++)
////			{
////				cin >> fenshu[i];
////			}
////			for (int i = 1; i <= person; i++)
////			{
////				int k = 0, sum = 0;
////				cin >> ss[i].name >> k;
////				for (int j = 1; j <= k; j++)
////				{
////					int dl = 0;
////					cin >> dl;
////					sum += fenshu[dl];
////				}
////				ss[i].score = sum;
////				
////			}
////			sort(ss + 1, ss + person + 1, cmp);
////			int cnt = 0;
////			for (int i = 1; i <= person; i++)
////			{
////				if (ss[i].score >= line)
////				{
////					cnt++;
////				}
////			}
////			cout << cnt << endl;
////			for (int i = 1; i <= cnt; i++)
////			{
////				cout << ss[i].name << ' ' << ss[i].score << endl;
////			}
////			
////	}
////
////	return 0;
////}
//

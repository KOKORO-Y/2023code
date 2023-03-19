//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <vector>
//const int N = 1e9 + 5;
//using namespace std;
//int main()
//{
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		vector<int> st, ed;
//		int n = 0;
//		cin >> n;
//		for (int i = 0; i < n; i++)
//		{
//			int x = 0;
//			scanf("%d", &x);
//			st.push_back(x);
//		}
//		for (int i = 0; i < n; i++)
//		{
//			int x = 0;
//			scanf("%d", &x);
//			ed.push_back(x);
//		}
//		int preed = 0;
//		for (int i = 0; i < n; i++)
//		{
//			if (st[i] < preed)
//			{
//				printf("%d ", ed[i] - preed);
//			}
//			else
//			{
//				printf("%d ", ed[i] - st[i]);
//			}
//			preed = ed[i];
//		}
//		printf("\n");
//		
//	}
//
//	return 0;
//}
//

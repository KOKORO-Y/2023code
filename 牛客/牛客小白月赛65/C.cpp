//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <iostream>
//#include <set>
//#include <algorithm>
//using namespace std;
////int arr[1000006] = { 0 };
//int main()
//{
//	//ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//	int t = 0, n = 0;
//	int a = 0, b = 0;
//	scanf("%d%d", &n, &t);
//	set<int,greater<int>> st;
//	for (int i = 1; i <= n; i++)
//	{
//		st.insert(i);
//	}
//	while (t--)
//	{
//		scanf("%d%d", &a, &b);
//		if (a == 1)
//		{
//			st.erase(b);
//		}
//		else if (a == 2)
//		{
//			if (st.upper_bound(b) == st.end())
//			{
//				printf("0\n");
//			}
//			else
//			{
//				printf("%d\n", *st.upper_bound(b));
//			}
//		}
//	}
//	
//
//
//	return 0;
//}
//

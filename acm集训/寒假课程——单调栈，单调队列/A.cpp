//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <stack>
//using namespace std;
//int arr[100000], ans[100000];
//int main()
//{
//	int n = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	stack <int> st;
//	long long int sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		while (!st.empty() && arr[st.top()] <= arr[i])
//		{
//			st.pop();
//		}
//		sum += st.size();
//		st.push(i);
//	}
//	cout << sum;
//
//	return 0;
//}
//

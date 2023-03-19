//#define _CRT_SECURE_NO_WARNINGS 1
//#include <set>
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	long long int n = 0, sum = 0, cnt = 0;
//	cin >> n;
//	set <long long int> st;
//	st.insert (0);
//	while (n--)
//	{
//		long long int x = 0;
//		cin >> x;
//		sum += x;
//		if (st.find(sum) == st.end())
//		{
//			st.insert(sum);
//		}
//		else 
//		{
//			cnt++;
//			st.clear();
//			sum = x;
//			st.insert(0);
//			st.insert(x);
//		}
//	}
//	cout << cnt;
//	return 0;
//}
//

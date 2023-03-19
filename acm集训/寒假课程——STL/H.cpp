//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cstring>
//#include <stack>
//
//using namespace std;
//
//char str[114514] = { 0 };
//int main()
//{
//	cin >> str;
//	stack<char> s;
//	int len = strlen(str);
//	for (int i =0; i < len; i++)
//	{
//		if (s.size() == 0)
//		{
//			s.push(str[i]);
//		}
//		else
//		{
//			if (str[i] == s.top())
//			{
//				s.pop();
//			}
//			else
//			{
//				s.push(str[i]);
//			}
//		}
//	}
//	if (s.size() == 0)
//	{
//		cout << "Yes\n";
//	}
//	else
//	{
//		cout << "No\n";
//	}
//
//
//	return 0;
//}
//

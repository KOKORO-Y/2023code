//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	string a, b;
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		cin >> a >> b;
//		long long int len1 = a.length();
//		long long int len2 = b.length();
//		if (a[len1 - 1] == b[len2 - 1])
//		{
//			if (a[len1 - 1] == 'S')
//			{
//				if (len1 > len2)
//				{
//					cout << "<" << endl;
//				}
//				else if (len1 < len2)
//				{
//					cout << ">" << endl;
//				}
//				else
//				{
//					cout << "=" << endl;
//				}
//			}
//			else if (a[len1 - 1] == 'M')
//			{
//				cout << "=" << endl;
//			}
//			else if (a[len1 - 1] == 'L')
//			{
//				if (len1 > len2)
//				{
//					cout << ">" << endl;
//				}
//				else if (len1 < len2)
//				{
//					cout << "<" << endl;
//				}
//				else
//				{
//					cout << "=" << endl;
//				}
//			}
//		}
//		else
//		{
//			if (a[len1 - 1] == 'S')
//			{
//				cout << "<" << endl;
//			}
//			else if (b[len2 - 1] == 'S')
//			{
//				cout << ">" << endl;
//			}
//			else if (a[len1 - 1] == 'M')
//			{
//				cout << "<" << endl;
//			}
//			else if (b[len2 - 1] == 'M')
//			{
//				cout << ">" << endl;
//			}
//		}
//	}
//	return 0;
//}
//

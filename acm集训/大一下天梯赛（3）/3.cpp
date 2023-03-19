//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <iostream>
//#include <string>
//#include <istream>
//using namespace std;
//
//int main()
//{
//	int t = 0;
//	cin >> t;
//	getchar();
//	while (t--)
//	{
//		string str, res = "";
//		getline(cin, str);
//		int flag = 1;
//		for (int i = str.length() - 1; i >= 0; i--)
//		{
//			if (str[i] == '.')
//			{
//				if (str[i - 1] != 'g')
//				{
//					flag = 0;
//					break;
//				}
//				if (str[i - 2] != 'n')
//				{
//					flag = 0;
//					break;
//				}
//				if (str[i - 3] != 'o')
//				{
//					flag = 0;
//					break;
//				}
//			}
//			if (str[i] == ',')
//			{
//				if (str[i - 1] != 'g')
//				{
//					flag = 0;
//					break;
//				}
//				if (str[i - 2] != 'n')
//				{
//					flag = 0;
//					break;
//				}
//				if (str[i - 3] != 'o')
//				{
//					flag = 0;
//					break;
//				}
//			}
//		}
//		if (flag)
//		{
//			int count = 0, index = 0;
//			for (int i = str.length() - 1; i >= 0; i--)
//			{
//				if (str[i] == ' ')
//				{
//					count++;
//				}
//				if (count == 3)
//				{
//					index = i;
//					break;
//				}
//			}
//			res = str.substr(0, index);
//			res += " qiao ben zhong.";
//			cout << res << endl;
//		}
//		else
//		{
//			cout << "Skipped" << endl;
//		}
//	}
//
//	return 0;
//}
//

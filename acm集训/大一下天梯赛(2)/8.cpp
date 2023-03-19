//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//struct number
//{
//	string name;
//	int flag = 0;
//}num[100001];
//int main()
//{
//	int n = 0;
//	cin >> n;
//	string a;
//	int x = 0;
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a >> x;
//		sum += x;
//		num[x].name = a;
//		num[x].flag = 1;
//	}
//	int ave = sum / n / 2;
//	for (int i = 0;; i++)
//	{
//		if (num[ave + i].flag == 1)
//		{
//			cout << ave << ' ' << num[ave + i].name;
//			break;
//		}
//		else if (num[ave - i].flag == 1)
//		{
//			cout << ave << ' ' << num[ave - i].name;
//			break;
//		}
//	}
//
//	return 0;
//}
//

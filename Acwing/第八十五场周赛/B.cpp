//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <map>
//#include <cstring>
//
//using namespace std;
//int arr[114] = { 0 };
//char str[1005] = { 0 };
//int maxx = -1;
//int main()
//{
//	int k = 0;
//	cin >> str >> k;
//	for (int i = 0; i < 26; i++)
//	{
//		cin >> arr[i];
//		if (arr[i] > maxx)
//		{
//			maxx = arr[i];
//		}
//	}
//	int len = strlen(str);
//	long long int sum = 0;
//	for (int i = 1; i <= len; i++)
//	{
//		sum += ((arr[str[i - 1] - 'a']) * i);
//	}
//	for (int j = len + 1; j <= len + k; j++)
//	{
//		sum += maxx * j;
//	}
//	cout << sum << endl;
//	return 0;
//}
//

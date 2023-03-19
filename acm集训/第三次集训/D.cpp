//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <string.h>
//
//using namespace std;
//char str[114514191] = { 0 };
//int arr1[5] = { 1,1,1,1 };
//int arr2[5] = { 1,2,4,3 };
//int arr3[5] = { 1,3,4,2 };
//int arr4[5] = { 1,4,1,4 };
//int main()
//{
//	cin >> str;
//	int len = strlen(str);
//	int md = 0;
//	for (int i = 0; i < len; i++)
//	{
//		md += (str[i] - '0');
//		md %= 4;
//		if (i < len - 1)
//		{
//			md *= 10;
//		}
//	}
//	while (md >= 4)
//	{
//		md -= 4;
//	}
//	int tnnd = arr1[md] + arr2[md] + arr3[md] + arr4[md];
//	cout << (tnnd % 5) << endl;
//	return 0;
//}
//

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//struct tnnd
//{
//	int n;
//	int cixu;
//}arr[1145144];
//int cmp(tnnd a, tnnd b)
//{
//	return a.n > b.n;
//}
//int main()
//{
//	int n = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> arr[i].n;
//		arr[i].cixu = i;
//	}
//	sort(arr + 1, arr + n + 1, cmp);
//	int daijia = 0;
//	for (int i = 0, j = 1; i < n; i++, j++)
//	{
//		daijia += arr[j].n * i;
//		daijia++;
//	}
//	cout << daijia << endl;
//	for (int i = 1; i <= n; i++)
//	{
//		cout << arr[i].cixu << ' ';
//	}
//
//	return 0;
//}
//

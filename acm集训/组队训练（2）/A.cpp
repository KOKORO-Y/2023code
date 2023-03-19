//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int n = 0, m = 0;
//	int a[60] = { 0 };
//	int b[60] = { 0 };
//	int c[60] = { 0 };
//	int z = 0;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) 
//	{
//		cin >> a[i] >> b[i];
//	}
//	int arr1[60] = { 0 };
//	int arr2[60] = { 0 };
//	for (int i = 1; i <= m; i++) 
//	{
//		int index = 0;
//		for (int j = 0; j < n; j++)
//		{
//			if (a[j] == i) 
//			{
//				arr1[index] = j + 1;
//				arr2[index] = b[j];
//				index++;
//			}
//
//		}
//		int max = 0;
//		for (int k = 0; k < index; k++) 
//		{
//			if (max < arr2[k])
//			{
//				max = arr2[k];
//				c[z] = arr1[k];
//			}
//		}
//		z++;
//	}
//	for (int i = 0; i < m; i++) 
//	{
//		cout << c[i] << ' ';
//	}
//	
//	return 0;
//}
//

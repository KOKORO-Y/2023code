//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//
////int  main()
////{
////    long long int n, m;
////    int q;   
////    int i, j; 
////    int s[50]; 
////    int a[50]; 
////    cin >> q;
////    while (q--) 
////    {
////        memset(s, 0, sizeof(s));
////        memset(a, 0, sizeof(a));
////        long long int sum = 0; 
////        int temp = 0; 
////        int len = 0; 
////        cin >> n >> m;
////        long long int loop = n / m;  
////        if (m > n)
////        {
////            cout << 0 << endl;
////            continue;
////        }
////        else {
////            for (i = 1; i <= loop; i++) 
////            {
////                temp = (m * i) % 10;
////                s[i] = temp;
////                a[temp]++;
////                if (a[temp] == 2)
////                {
////                    break;
////                }
////                sum += temp;
////                len++;
////            }
////        }
////        sum *= (loop / len);
////        if (loop / len != 0) 
////        {
////            for (i = 1; i <= loop % len; i++)
////            {
////                sum += s[i];
////            }
////        }
////        cout << sum << endl;
////    }
////    return 0;
////}
//
//
//
//char str[19] = { 0 };
//
//int main()
//{
//	int arr0[11] = { 0 };
//	int arr1[11] = { 1,2,3,4,5,6,7,8,9,0 };
//	int arr2[11] = { 2,4,6,8,0 };
//	int arr3[11] = { 3,6,9,2,5,8,1,4,7,0 };
//	int arr4[11] = { 4,8,2,6,0 };
//	int arr5[11] = { 5,0 };
//	int arr6[11] = { 6,2,8,4,0 };
//	int arr7[11] = { 7,4,1,7,5,2,9,6,3,0 };
//	int arr8[11] = { 8,6,4,2,0 };
//	int arr9[11] = { 9,8,7,6,5,4,3,2,1,0 };
//	int* arr[11] = { arr0,arr1,arr2,arr3,arr4,arr5,arr6,arr7,arr8,arr9 };
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		//memset(&str, 0, sizeof(str));
//		long long int a = 0, b = 0;
//		cin >> a >> b;
//		long long int s = 0, res = 0, sum = 0;
//		//long long int len = strlen(str);
//		/*for (long long int i = 0; i < len; i++)
//		{
//			if (i >= 1)
//			{
//				s *= 10;
//			}
//			s += (str[i] - '0');
//			res += s / b;
//			if (i < len - 1)
//			{
//				res *= 10;
//			}
//			s %= b;
//		}*/
//		if (a < b)
//		{
//			cout << 0 << endl;
//			continue;
//		}
//		res = (a / b);
//		if (b % 10 == 1 || b % 10 == 3 || b % 10 == 7 || b % 10 == 9)
//		{
//			while (res >= 10)
//			{
//				long long int temp = res / 10;
//				sum += temp * 45;
//				res %= 10;
//			}
//			for (long long int i = 0; i < res; i++)
//			{
//				sum += *(arr[(b % 10)] + i);
//			}
//		}
//		else if (b % 10 == 2 || b % 10 == 4 || b % 10 == 6 || b % 10 == 8)
//		{
//			while (res >= 5)
//			{
//				long long int temp = res / 5;
//				sum += temp * 20;
//				res %= 5;
//			}
//			for (int i = 0; i < res; i++)
//			{
//				sum += *(arr[(b % 10)] + i);
//			}
//		}
//		else if (b % 10 == 5)
//		{
//			while (res >= 2)
//			{
//				long long int temp = res / 2;
//				sum += temp * 5;
//				res %= 2;
//			}
//			for (int i = 0; i < res; i++)
//			{
//				sum += *(arr[(b % 10)] + i);
//			}
//		}
//		else if (b % 10 == 0)
//		{
//			sum = 0;
//		}
//		cout << sum << endl;
//	}
//
//	return 0;
//}
//

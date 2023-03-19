//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//#include <queue>
//#include <vector>
//#define ll long long int 
//using namespace std;
//long long int arr[200005] = { 0 };
//ll qz[200005];
//long long int n = 0, c = 0, d = 0;
//bool check(long long int mid)
//{
//	priority_queue<long long int> q1;
//	queue<long long int> q2;
//	long long int sum = 0;
//	for (long long int i = 0; i < n; i++)
//	{
//		q1.push(arr[i]);
//	}
//	if (mid == 0)
//	{
//		sum = d * q1.top();
//	}
//	else
//	{
//		long long int T = (d / (mid + 1));
//		long long int Tnum = 0, round = 0;
//		round = ((mid + 1) > d ? d : (mid + 1));
//		for (int i = 0; i < round; i++)
//		{
//			Tnum += arr[i];
//		}
//		sum += Tnum * T;
//		long long int rest = d % (mid + 1);
//		long long int round2 = 0;
//		round2 = (rest > n ? n : rest);
//		for (int i = 0; i < round2; i++)
//		{
//			sum += arr[i];
//		}
//	}
//	if (sum >= c)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//
//}
//void solve()
//{
//	cin >> n >> c >> d;
//	memset(&arr, 0, sizeof(arr));
//	for (long long int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	sort(arr, arr + n, greater<long long int>());
//	qz[0] = arr[0];
//	for (int i = 1; i < d; i++) 
//	{
//		qz[i] = qz[i - 1] + arr[i];
//    }
//	if (qz[min(d - 1, n - 1)] >= c)
//	{
//		cout << "Infinity" << endl;
//	}
//	else if (arr[0] * d < c)
//	{
//		cout << "Impossible" << endl;
//	}
//	else
//	{
//		long long int l = 0, r = d, mid = 0;
//		while (l <= r)
//		{
//			mid = (r + l) >> 1;
//			if (check(mid))
//			{
//				l = mid + 1;
//			}
//			else
//			{
//				r = mid - 1;
//			}
//		}
//		cout << r << endl;
//		
//	}
//
//}
//
//int main()
//{
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		solve();
//	}
//
//	return 0;
//}
//
//
////#define ll long long int 
////const int N = 2e5 + 5;
////ll coin[N];
////ll qz[N];
////int find(int l, int r, ll d, ll c)
////{
////    int mid;
////    while (l <= r) 
////    {
////        mid = l - (l - r) / 2;
////        if (d / (mid + 1) * qz[mid] + qz[d % (mid + 1) - 1] >= c)
////        {
////            l = mid + 1;
////        }
////        else
////        {
////            r = mid - 1;
////        }
////    }
////    return r;
////}
////int main() 
////{
////    int t;
////    cin >> t;
////    while (t--) 
////    {
////        memset(coin, 0, sizeof(coin));
////        memset(qz, 0, sizeof(qz));
////        ll n = 0, c = 0, d = 0, k = 0;
////        cin >> n >> c >> d;
////        for (int i = 0; i < n; i++) 
////        {
////            cin >> coin[i];
////        }
////        sort(coin, coin + n, greater<long long int>());
////        qz[0] = coin[0];
////        for (int i = 1; i < d; i++) 
////        {
////            qz[i] = qz[i - 1] + coin[i];
////        }
////        if (coin[0] * d < c) 
////        {
////            cout << "Impossible" << endl;
////            continue;
////        }
////        else 
////        {
////            if (qz[min(d - 1, n - 1)] >= c) 
////            {
////                cout << "Infinity" << endl;
////                continue;
////            }
////            else 
////            {
////                cout << find(0, d, d, c) << endl;
////            }
////        }
////    }
////    return 0;
////}
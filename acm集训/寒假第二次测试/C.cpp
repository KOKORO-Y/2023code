//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//char a[1000009], s[1000009];
//int n = 0, p[1000009];
//bool check(char x, char y)
//{
//    if (x == '1' && y == '0')
//        return 1;
//    if (x == '0' && y == '1')
//        return 1;
//    if (x == '#' && y == '#')
//        return 1;
//    return 0;
//}
//void Manacher()
//{
//    s[0] = '$';
//    s[1] = '#';
//    for (int i = 0; i < n; i++)
//    {
//        s[2 * i + 2] = a[i];
//        s[2 * i + 3] = '#';
//    }
//    int right = 0, mid = 0;
//    for (int i = 1; i < 2 * n + 1; i = i + 2)
//    {
//        if (i < right)
//        {
//            p[i] = min(p[mid * 2 - i], right - i);
//        }
//        else
//        {
//            p[i] = 1;
//        }
//        while (check(s[i - p[i]], s[i + p[i]]))
//        {
//            p[i]++;
//        }
//        if (i + p[i] > right)
//        {
//            mid = i;
//            right = i + p[i];
//        }
//        //ans=max(ans,p[i]);
//    }
//}
//int main()
//{
//    cin >> n >> a;
//    Manacher();
//    long long int ans = 0;
//    for (int i = 1; i <= 2 * n + 1; i = i + 2)
//    {
//        ans = ans + (p[i]) / 2;
//    }
//    cout << ans << endl;
//    return 0;
//}